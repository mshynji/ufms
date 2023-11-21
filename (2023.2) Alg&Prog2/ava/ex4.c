/* 21.4
 *  O problema de Josephus foi assim descrito através do relato de Flavius Josephus, um
 *  historiador judeu que viveu no primeiro século, sobre o cerco de Yodfat. Ele e mais 40
 *  soldados aliados estavam encurralados em uma caverna rodeada por soldados romanos e,
 *  não havendo saída, optaram então por suas próprias mortes antes da captura. Decidiram
 *  que formariam um círculo e, a cada contagem de 3, um soldado seria morto pelo grupo.
 *  Josephus foi o soldado restante e decidiu então não se suicidar, deixando essa estória
 *  como legado. Podemos descrever um problema mais geral como segue. Imagine n pessoas
 *  dispostas em círculo. Suponha que as pessoas são numeradas de 1 a n no sentido horário
 *  e que um número inteiro m, com 1 <= m < n, seja fornecido. Começando com a pessoa de
 *  número 1, percorra o círculo no sentido horário e elimine cada m-ésima pessoa enquanto
 *  o círculo tiver duas ou mais pessoas. Escreva e teste uma função que resolva o problema,
 *  imprimindo na saída o número do sobrevivente.
*/

#include <stdio.h>
#include <stdlib.h>

// Registro para nó da lista encadeada circular
typedef struct cel {
	int chave;
	struct cel *prox; // Ponteiro para o próximo nó
} Celula;

// Declaração das funções
void imprimirLista(Celula *lista);  // Função para imprimir lista
void limparMemoria(Celula **lista); // Função para limpar lista da memória

// Funções para lista encadeada circular com cabeça
void adicionarLista(Celula *lista, int num);
void removerLista(Celula *lista, Celula *cel);

// Algoritmo iterativo do problema de Josephus
void acharSobrevivente(Celula *lista, int *n, int m);

int main() {
	// Lista circular
	Celula *listaCircular = (Celula *) malloc(sizeof(Celula));
	listaCircular->prox = listaCircular; // O último elemento sempre aponta para a cabeça da lista
					     // Já que não tem nenhum elemento, a cabeça aponta para ela mesma

	if(listaCircular == NULL) {
		// Verificando se foi possível fazer a alocação da lista
		printf("Nao foi possivel fazer a alocacao inicial da lista circular.\n");
		return -1;
	}
	
	int n, m; // Tamanho da lista e periodicidade de quando matar soldado
	printf("Informe o valor de n: ");
	scanf("%d", &n);
	printf("Informe o valor de m: ");
	scanf("%d", &m);

	// Populando lista
	for(int i = 0; i < n; i++)
		adicionarLista(listaCircular, i+1);

	// Imprimindo lista antes do algoritmo
	printf("\nLista antes do problema (%d): \n", n);
	imprimirLista(listaCircular);
	printf("\n");

	acharSobrevivente(listaCircular, &n, m);

	// Imprimindo lista depois do algoritmo
	printf("Lista depois do problema (%d): \n", n);
	imprimirLista(listaCircular);
	printf("\n");

	limparMemoria(&listaCircular); // Limpando lista da memória
	
	if(listaCircular == NULL)
		printf("Lista limpa da memoria.\n\n");

	return 0;
}

// Imprimir lista encadeada circular
void imprimirLista(Celula *lista) {
	Celula *cel = lista->prox; // Já que o primeiro elemento é o "dummy node", começar a imprimir a partir do segundo elemento

	printf("HEAD -> ");
	while(cel != lista) {
		// Já que nenhuma célula pode ser nula, já que a última aponta pra cabeça, verificar se cel != lista
		printf("%d -> ", cel->chave);
		cel = cel->prox;
	}
	printf("HEAD\n");
}

// Função para limpar lista encadeada circular da memória
void limparMemoria(Celula **lista) {
	Celula *remover = NULL;
	Celula *atual   = (*lista);

	do {
		// O do...while() está sendo utilizado ao invés do while(), pois atual começa como (*lista)
		remover = atual;
		atual = atual->prox;
		
		free(remover);
	} while(atual != (*lista));
	
	(*lista) = NULL; // Definindo a cabeça como NULL
}

// Função que adiciona elemento para o fim da lista encadeada circular e faz o elemento apontar para a cabeça
void adicionarLista(Celula *lista, int num) {
	Celula *novo = (Celula *) malloc(sizeof(Celula));

	if(novo == NULL) {
		// Verificando se foi possivel fazer a alocacao para o novo elemento na memoria
		printf("Nao foi possivel alocar espaco na memoria para o novo elemento.\n");
		return;
	}

	novo->chave = num; // Copiando a chave para o novo elemento

	Celula *cel = lista;
	while(cel->prox != lista) // Verificando quando chegar no último elemento
		cel = cel->prox;

	novo->prox = cel->prox; // Fazendo o novo elemento apontar para a cabeça da lista
	cel->prox  = novo;      // FAzendo a cauda da lista apontar para o novo elemento
}

// Função que remove um item da lista com base no seu endereço da memória
void removerLista(Celula *lista, Celula *cel) {
	Celula *p = lista;
	Celula *q = lista->prox;

	while(q != lista && q != cel) {
		// Esse while roda enquanto q não terminar de completar uma volta (q = lista)
		// e enquanto q não achar a célula desejada
		p = q;
		q = q->prox;	
	}

	if(q == lista) // Se q == lista, o elemento não existe na lista
		return;

	p->prox = q->prox;
	free(q);
}

// Para um número de n pessoas em um círculo, matar a m-ésima pessoa até restar duas ou menos pessoas
void acharSobrevivente(Celula *lista, int *n, int m) {
	Celula *cel = lista->prox;

	int contador = 1; // Contador começa em 1 e mata em m
	while((*n) >= 2) { // Verificando se o número de pessoas é sempre maior que 2
		if(cel != lista) {
			// Verificando se a célula atual não é a cabeça
			if(contador == m) {
				// Verificando se o contador já chegou no número
				Celula *remover = cel;
				cel = cel->prox;

				(*n)--;
				contador = 1;
				removerLista(lista, remover); // Removendo elemento da lista
				continue;
			}

			contador++;
		}

		cel = cel->prox;
	}
}
