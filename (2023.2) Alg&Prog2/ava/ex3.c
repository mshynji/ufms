/* 20.1
 * Implemente as funções de enfileiramento e desenfileiramento em uma fila
 * em alocação encadaeda sem cabeça.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

// Registro para nós da fila
typedef struct cel {
	int valor;
	struct cel *prox; // Ponteiro para próximo nó da fila
} cel;

// Declaração das funções
void limparMemoria(cel **inicio, cel **final); // Função que limpa fila da memória (free())

// Funções para fila sem cabeça
void enfileirar(cel **inicio, cel **final, int valor); // Adiciona valor para o final de uma fila sem cabeça
int  desenfileirar(cel **inicio, cel **final); // Remove valor do topo da fila

int main() {
	srand(time(NULL)); // Definindo seed da função rand()
	
	// Fila sem cabeça
	cel *inicio = NULL; // Primeiro registro
	cel *final  = NULL; // Último registro

	// Populando fila
	printf("Valores enfileirados:    "); // Mostrando valores enfileirados para comparação com valores desenfileirados
	for(int i = 0; i < 10; i++) {
		int numero = (rand()%1000) + 1; // Gerando número aleatório entre 1 e 1000.
		printf("%d ", numero);
		
		enfileirar(&inicio, &final, numero); // Enfileirando valor
	}
	printf("\n");

	// Desenfileirando valores
	printf("Valores desenfileirados: "); // Mostrando valores desenfileirados para comparação com valores enfileirados
	while(inicio != NULL)  {
		int numero = desenfileirar(&inicio, &final); // Pegando valor do topo da fila
		printf("%d ", numero);
	}
	printf("\n\n");

	// Limpando fila da memória
	limparMemoria(&inicio, &final);
	if(inicio == NULL && final == NULL)
		printf("Fila limpa da memoria.\n\n");

	return 0;
}

// Função que limpa fila sem cabeça da memória
void limparMemoria(cel **inicio, cel **final) {
	cel *remover = NULL;

	while((*inicio) != NULL) {
		// Limpa nó por nó da fila até que não tenha mais nenhum
		remover = (*inicio); // Guardando nó
		(*inicio) = (*inicio)->prox; // Passando para o próximo

		free(remover); // Limpando espaço da memória do nó guardado
	}

	(*final) = NULL; // Limpando o ponteiro que guarda o registro do último elemento
}

// Função que adiciona novo valor para o fim da fila
void enfileirar(cel **inicio, cel **final, int valor) {
	cel *novo = (cel *) malloc(sizeof(cel));

	if(novo == NULL) {
		// Verificando se houve algum erro na hora de alocar espaço na memória para o novo valor
		printf("Nao foi possivel alocar espaco na memoria para o novo valor.\n");
		return;
	}

	// Adicionando os valores do novo valor
	novo->valor = valor;
	novo->prox  = NULL;

	// Adicionando valor no final da fila
	if((*inicio) == NULL) {
		// Fila vazia
		(*inicio) = novo;
		(*final) = (*inicio);
	} else {
		(*final)->prox = novo;
		(*final) = novo;
	}
}

// Função que remove e retorna o valor do topo da fila
int desenfileirar(cel **i, cel **f) {
	cel *cel = (*i);

	int num = INT_MIN;
	if(cel != NULL) {
		num = cel->valor;
		(*i) = (*i)->prox;

		if((*i) == NULL)
			(*f) = (*i);
	}

	return num;
}
