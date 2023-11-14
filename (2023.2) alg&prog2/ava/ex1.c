/* 18.12
 * Sejam S1 e S2 dois conjuntos disjuntos de números inteiros. Suponha que S1 e S2 estão
 * implementados em duas listas lineares em alocação encadeada. Escreva uma função uniao
 * que receba as listas representando os conjuntos S1 e S2 e devolva uma lista resultante
 * que representa a união dos conjuntos, isto é, uma lista linear encadeada que representa
 * o conjunto S = S1∪S2. Considere os casos em que as listas lineares encadeadas são
 * com cabeça e sem cabeça
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Registro para cada nó da lista encadeada
typedef struct cel {
	int valor;
	struct cel *prox; // Ponteiro para próximo nó na lista
} cel;

/* Declaração das funções */
// imprimirLista(lista) -> listas encadeadas sem cabeça
// imprimirLista(lista->prox) -> listas encadeadas com cabeça
void imprimirLista(cel *lista); // Imprimir lista encadeada
void limparMemoria(cel **lista); // Função para limpar lista encadeada da memória (free())

// Funções para listas encadeadas sem cabeça
void adicionarLista(cel **lista, int valor); // Adiciona valor para a lista encadeada em ordem crescente
cel* unirListas(cel *lista1, cel *lista2);   // Junta duas listas encadeadas em uma terceira sem alterar as duas primeiras

// Funções para listas encadeadas com cabeça
void adicionarListaH(cel *lista, int valor); // Adiciona valor para a lista encadeada em ordem crescente
cel* unirListasH(cel *lista1, cel* lista2);  // Junta duas listas encadeadas em uma terceira sem alterar as duas primeiras

int main() {
	srand(time(NULL)); // Definindo a seed da função rand()

	// Lista encadeada sem cabeça
	cel *conj1 = NULL; // Números pares
	cel *conj2 = NULL; // Números ímpares
	
	// Populando os dois conjuntos
	for(int i = 0; i < 10; i++) {
		int numero = (rand()%1000) + 1; // Gerando um número aleatório entre 1 e 1000
		// Operação ternária que adiciona números pares para o conj1 e números ímpares para o conj2
		(numero%2 == 0) ? adicionarLista(&conj1, numero) : adicionarLista(&conj2, numero);
	}

	// Lista encadeada sem cabeça
	cel *conjRes = unirListas(conj1, conj2); // Essa lista serve para guardar a união dos outros dois conjuntos
	
	// Imprimindo as listas
	printf("Listas encadeadas sem cabeca:\n");
	printf("Conjunto 1: ");
	imprimirLista(conj1);
	printf("Conjunto 2: ");
	imprimirLista(conj2);
	printf("Conjunto 1 + Conjunto 2: ");
	imprimirLista(conjRes);

	// Limpando listas encadeadas sem cabeça da memória
	limparMemoria(&conj1);
	limparMemoria(&conj2);
	limparMemoria(&conjRes);

	if(conj1 == NULL && conj2 == NULL && conjRes == NULL)
		printf("\nListas encadeadas sem cabeca limpas da memoria.\n\n");



	// Lista encadeada com cabeça
	cel *hConj1 = (cel *) malloc(sizeof(cel)); // Números pares
	cel *hConj2 = (cel *) malloc(sizeof(cel)); // Números ímpares

	if(hConj1 == NULL || hConj2 == NULL) {
		// Verificando se ocorreu um erro durante a alocação da cabeça das listas
		printf("Nao foi possivel inicializar as listas com cabeca. Alocacao da cabeca das listas malsucedida.\n");

		// Limpando as duas listas da memória para evitar problemas
		limparMemoria(&hConj1);
		limparMemoria(&hConj2);

		return -1;
	}

	// Populandos os dois conjuntos
	for(int i = 0; i < 10; i++) {
		int numero = (rand()%1000) + 1; // Gerando um número entre 1 e 1000
		// Operação ternária que adiciona números pares para o hConj1 e números ímpares para o hConj2
		(numero%2 == 0) ? adicionarListaH(hConj1, numero) : adicionarListaH(hConj2, numero);
	}

	// Lista encadeada com cabeça
	cel *hConjRes = unirListasH(hConj1, hConj2); // Essa lista serve para guardar a união dos outros dois conjuntos

	// Imprimindo as listas
	printf("Listas encadeadas com cabeca:\n");
	printf("Conjunto 1: HEAD -> ");
	imprimirLista(hConj1->prox);
	printf("Conjunto 2: HEAD -> ");
	imprimirLista(hConj2->prox);
	printf("Conjunto 1 + Conjunto 2: HEAD -> ");
	imprimirLista(hConjRes->prox);

	// Limpando listas encadeadas com cabeça da memória
	limparMemoria(&hConj1);
	limparMemoria(&hConj2);

	if(hConj1 == NULL && hConj2 == NULL)
		printf("\nListas encadeadas com cabeca limpas da memoria.\n\n");

	return 0;
}

// Função para imprimir uma lista encadeada
// Para listas sem cabeça, utilizar imprimirLista(lista)
// Para listas com cabeça, utilizar imprimirLista(lista->prox)
void imprimirLista(cel *lista) {
	cel *cel = lista;

	while(cel != NULL) {
		// Imprimindo nó da lista enquanto ele for diferente de NULL
		printf("%d -> ", cel->valor);
		cel = cel->prox; // Passando para o próximo nó
	}

	printf("NULL\n");
}

// Função para limpar as listas da memória
void limparMemoria(cel **lista) {
	cel *remover = NULL;
	
	while((*lista) != NULL) {
		// Remove um nó por vez até não ter mais nenhum
		remover = (*lista); // Guardando nó
		(*lista) = (*lista)->prox; // Passando para o próximo nó

		free(remover); // Limpando espaço da memória do nó guardado
	}
}

// Função para adicionar elemento em uma lista encadeada sem cabeça
// A função recebe um valor e adiciona o valor na ordem correta
void adicionarLista(cel **lista, int valor) {
	// Novo valor
	cel *novo = (cel *) malloc(sizeof(cel));

	if(novo == NULL) {
		// Verificando se foi possível alocar espaço na memória para o novo valor
		printf("Nao foi possivel alocar espaco na memoria para o novo elemento da lista!\n");
		return;
	}

	// Definindo os valores do novo valor
	novo->valor = valor;
	novo->prox  = NULL;

	cel *p = NULL; // Ponteiro do nó que precede o novo valor
	cel *q = (*lista); // Ponteiro do nó que sucede o novo valor (NULL se não tiver)

	while(q != NULL && q->valor < valor) {
		// Procurando o lugar do novo elemento na lista encadeada
		// Se o valor informado for o maior da lista, ele vai ser adicionado ao fim
		p = q;
		q = q->prox;
	}

	// Verificando se o valor tem que ser inserido no início da lista
	if(p == NULL) // Ou a lista está vazia ou q (primeiro valor) é igual ou maior que o novo valor
		(*lista) = novo;
	else // O novo valor se encontra no meio da lista
		p->prox = novo;

	novo->prox = q; // Fazendo o resto da lista suceder o novo valor
}

// Função que uni duas listas encadeadas sem cabeça em uma nova lista encadeada sem cabeça ordenada
cel * unirListas(cel *lista1, cel* lista2) {
	cel *lista3 = NULL; // Inicializando a terceira lista como NULL

	cel *a = lista1; // Iterador da primeira lista
	cel *b = lista2; // Iterador da segunda lista

	// Percorrendo ambas as listas
	while(a != NULL) {
		// Adicionando valores da primeira lista um por um na terceira lista (em ordem)
		adicionarLista(&lista3, a->valor);
		a = a->prox;
	}

	while(b != NULL) {
		// Adicionando valores da segunda lista um por um na terceira lista (em ordem)
		adicionarLista(&lista3, b->valor);
		b = b->prox;
	}

	return lista3; // Listas unidas. Se as listas forem vazias, retorna NULL
}

// Função que adiciona um novo valor para uma lista encadeada com cabeça
// Essa função recebe um valor e o adiciona na ordem correta
void adicionarListaH(cel *lista, int valor) {
	// Novo valor
	cel *novo = (cel *) malloc(sizeof(cel));

	if(novo == NULL) {
		// Verificando se foi possível alocar espaço na memória para o novo valor
		printf("Nao foi possivel alocar espaco na memoria para o novo elemento da lista!\n");
		return;
	}

	// Definindo os valores do novo valor
	novo->valor = valor;
	novo->prox  = NULL;

	cel *p = lista; // Ponteiro do nó que precede o novo valor
	cel *q = lista->prox; // Ponteiro do nó que sucede o novo valor (NULL se não tiver)

	while(q != NULL && q->valor < valor) {
		// Procurando o lugar do novo elemento na lista encadeada
		// Se o valor informado for o maior da lista, ele vai ser adicionado ao fim
		p = q;
		q = q->prox;
	}

	// p -> novo -> q
	p->prox    = novo; // Número que precede o novo valor aponta para o novo valor
	novo->prox = q;    // Novo valor aponta para o número que o sucede

	novo->prox = q; // Fazendo o resto da lista suceder o novo valor
}

// Função que uni duas listas encadeadas com cabeça em uma nova lista encadeada com cabeça ordenada
cel * unirListasH(cel *lista1, cel* lista2) {
	cel *lista3 = (cel *) malloc(sizeof(cel)); // Inicializando a terceira lista
	
	if(lista3 == NULL) {
		// Verificando se foi possível alocar espaço na memória para a cabeça da terceira lista
		printf("Nao foi possivel inicializar a terceira lista.");
		return NULL;
	}

	cel *a = lista1->prox; // Iterador da primeira lista
	cel *b = lista2->prox; // Iterador da segunda lista

	// Percorrendo ambas as listas
	while(a != NULL) {
		// Adicionando valores da primeira lista um por um na terceira lista (em ordem)
		adicionarListaH(lista3, a->valor);
		a = a->prox;
	}

	while(b != NULL) {
		// Adicionando valores da segunda lista um por um na terceira lista (em ordem)
		adicionarListaH(lista3, b->valor);
		b = b->prox;
	}

	return lista3; // Listas unidas. Se as listas forem vazias, retorna NULL
}
