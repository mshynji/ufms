/* 22.5
 * Suponha que você queira manter uma lista linear duplamente encadeada com
 * cabeça com as chaves em ordem crescente. Escreva as funções de busca,
 * inserção e remoção para essa lista.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Registro para nó da lista
typedef struct cel {
	int valor;
	struct cel *prev; // Ponteiro para o nó anterior
	struct cel *prox; // Ponteiro para o próximo nó
} cel;

// Declaração das funções
void imprimirLista(cel *lista);  // Função para imprimir lista encadeada duplamente ligada
void limparMemoria(cel **lista); // Função para limpar lista da memória

// Funções para listas encadeadas duplamente ligadas
void  adicionarLista(cel *lista, int valor); // Essa função adiciona um novo valor à lista em ordem crescente
void  removerLista(cel *lista, int valor); // Função para remover nó da lista
cel * buscarLista(cel *lista, int valor); // Procura valor específico entre nós e retorna um ponteiro

int main() {
	srand(time(NULL)); // Definindo a seed da função rand()

	// Lista encadeada duplamente ligada com cabeça
	cel *lista = (cel *) malloc(sizeof(cel));
	
	if(lista == NULL) {
		// Verificando se ocorreu algum erro na hora de alocar o espaço pra cabeça da lista
		printf("Nao foi possivel alocar espaco na memoria para a cabeça da lista.\n");
		return -1;
	}

	// Populando lista
	printf("(Adicionando)\n"); // Imprimindo lista para ver o progresso das inserções
	imprimirLista(lista);      // e verificar se estão sendo adicionados em ordem crescente
	for(int i = 0; i < 10; i++) {
		int numero = (rand()%1000) + 1; // Gerando número aleatório entre 1 e 1000
		adicionarLista(lista, numero); // Adicionando número na lista

		imprimirLista(lista);
	}
	printf("\n");

	// Removendo valores da lista
	int numero; // Número que vai sr removido

	printf("(Removendo)\n");
	while(lista->prox != NULL) {
		// Essa função vai rodar até o usuário informar todos os valores da lista,
		// ou seja, até a lista estiver vazia
		printf("Lista: "); // Verificando o progresso
		imprimirLista(lista);

		printf("Informe um valor para ser removido: ");
		scanf("%d", &numero); // Lendo valor que vai ser removido

		removerLista(lista, numero); // Removendo valor da lista
		printf("\n");
	}
	printf("Todos os valores da lista foram removidos!\n\n");

	// Limpando lista da memória
	limparMemoria(&lista);
	
	if(lista == NULL)
		printf("Lista limpa da memoria com sucesso.\n\n");

	return 0;
}

// Função para imprimir lista encadeada duplamente ligada
void imprimirLista(cel *lista) {
	cel *cel = lista->prox;

	printf("HEAD -> ");
	while(cel != NULL) {
		// Iterando sobre todos os nós
		printf("%d <-> ", cel->valor);
		cel = cel->prox;
	}
	printf("NULL\n");
}

// Função para limpar lista encadeada duplamente ligada da memória
void limparMemoria(cel **lista) {
	cel *remover = NULL;

	while((*lista) != NULL) {
		remover  = (*lista); // Guardando nó atual
		(*lista) = (*lista)->prox; // Passando para o próximo nó

		free(remover); // Limpando conteúdo do endereço da memória do nó guardado
	}
}

// Função que adiciona um novo valor para uma lista encadeada duplamente ligada
// Ela recebe um valor e o adiciona em ordem, deixando a lista crescente
void adicionarLista(cel *lista, int valor) {
	cel *novo = (cel *) malloc(sizeof(cel));

	if(novo == NULL) {
		// Verificando se ocorreu algum erro na hora de alocar espaço para o novo valor
		printf("Nao foi possivel alocar espaco na memoria para o novo valor.\n");
		return;
	}

	// Adicionando os valores do novo valor;
	novo->valor = valor;
	novo->prev  = NULL;
	novo->prox  = NULL;

	// Procurando posição do novo valor na lista
	cel *p = lista;
	cel *q = lista->prox;

	while(q != NULL && q->valor < valor) {
		p = q;
		q = q->prox;
	}

	// Definindo relações
	novo->prox = q;
	p->prox    = novo;

	// Verificando se o valor anterior é um nó e não o "dummy node"
	if(p != lista)
		novo->prev = p;
	// Verificando se o próximo valor é um nó e não NULL
	if(q != NULL)
		q->prev = novo;
}

// Função que remove um nó da lista com base no valor dele
void removerLista(cel *lista, int valor) {
	cel *cel = buscarLista(lista, valor); // Buscando valor na lista

	if(cel == NULL) {
		// Verificando se o valor existe na lista
		printf("Valor %d nao existe na lista.\n", valor);
		return;
	}

	// Arrumando as ligações e removendo o valor
	if(cel->prev == NULL)
		lista->prox = cel->prox;
	else
		cel->prev->prox = cel->prox;

	if(cel->prox != NULL)
		cel->prox->prev = cel->prev;

	free(cel); // Limpando valor removido da memória
}

// Função que busca um valor específico dentre os nós da lista
cel * buscarLista(cel *lista, int valor) {
	cel *cel = lista->prox; // Iterador da lista

	while(cel != NULL && cel->valor != valor)
		cel = cel->prox;

	return cel; // Se o nó não existir ou caso a lista esteja vazia, retorna NULL
}
