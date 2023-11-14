/* 19.1
 * Considere uma pilha em alocação encadeada sem cabeça. Escreva as funções para
 * empilhar um elemento na pilha e desempilhar um elemento da pilha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

// Registro para cada nó da pilha
typedef struct cel {
	int valor;
	struct cel *prox; // Ponteiro para próximo elemento da pilha
} cel;

// Declaração das funções
void limparMemoria(cel **pilha); // Função para limpar pilha da memória (free())

// Funções para pilhas sem cabeça
void empilhar(cel **pilha, int valor); // Adiciona elemento para topo da pilha
int  desempilhar(cel **pilha);          // Remove elemento do topo da pilha

int main() {
	srand(time(NULL)); // Definindo a seed da função rand()
	
	// Pilha sem cabeça
	cel *pilha = NULL;

	// Populando pilha
	printf("Valores empilhados:    "); // Mostrando valores para comparar como valores são empilhados
	for(int i = 0; i < 10; i++) {
		int numero = (rand()%1000) + 1; // Gerando um número aleatório entre 1 e 1000
		printf("%d ", numero);
		
		empilhar(&pilha, numero); // Empilhando valor
	}
	printf("\n");

	// Desempilhando valores
	printf("Valores desempilhados: "); // Mostrando valores para comparar como valore são desempilhados
	while(pilha != NULL) {
		int numero = desempilhar(&pilha); // Pegando valor do topo da pilha
		printf("%d ", numero);
	}
	printf("\n\n");

	// Limpando pilha da memória
	limparMemoria(&pilha);
	if(pilha == NULL)
		printf("Pilha limpa da memoria.\n\n");

	return 0;
}

// Função para limpar pilha da memória
void limparMemoria(cel **pilha) {
	cel *remover = NULL;

	while((*pilha) != NULL) {
		// Remove um nó por vez da pilha até não ter mais nenhum
		remover  = (*pilha); // Guardando nó
		(*pilha) = (*pilha)->prox; // Passando para o próximo nó

		free(remover); // Limpando espaço da memória do nó guardado
	}
}

// Função para adicionar valor no topo de uma pilha sem cabeça
void empilhar(cel **pilha, int valor) {
	cel *novo = (cel *) malloc(sizeof(cel));

	if(novo == NULL) {
		// Verificando se houve algum erro na hora de alocar espaço apra o novo valor
		printf("Nao foi possivel alocar espaco na memoria para o novo elemento da pilha.\n");
		return;
	}

	// Definindo os valores do novo valor
	novo->valor = valor;
	novo->prox  = (*pilha);

	(*pilha) = novo;
}

// Função que remove e retorna o primeiro elemento de uma pilha sem cabeça
int desempilhar(cel **pilha) {
	cel *cel = (*pilha);

	int num = INT_MIN;
	if(cel != NULL) {
		num = cel->valor;
		(*pilha) = (*pilha)->prox;
	}

	return num;
}
