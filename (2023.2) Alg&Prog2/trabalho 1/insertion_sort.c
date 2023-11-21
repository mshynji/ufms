#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

void mover_para_esquerda(u_llong n, u_llong vetor[]) {
	if((n-1) >= 1) {
		if(vetor[n-1] > vetor[n-2]) {
			trocar(&vetor[n-1], &vetor[n-2]);
			mover_para_esquerda(n-1, vetor);
		}
	}
}

void insertion_sort(u_llong n, u_llong vetor[]) {
	if(n >= 1) {
		insertion_sort(n-1, vetor);
		mover_para_esquerda(n, vetor);
	}
}

int main() {
	srand(time(NULL));

	limpar_tela();

	u_llong n;
	short mostrar_vetores;
	clock_t start_t, end_t;

	printf("INSERTION SORT\n\n");

	printf("Informe a quantidade de itens que deseja ordenar: ");
	scanf("%llu", &n);

	printf("Deseja imprimir os vetores (1) ou somente o tempo final (0)? : ");
	scanf("%hd", &mostrar_vetores);

	u_llong vetor[n];
	preencher_vetor(n, vetor);

	if(mostrar_vetores) {
		printf("\n\nVetor desordenado:\n");
		imprimir_vetor(n, vetor);
		printf("\n");
	}

	start_t = clock();
	insertion_sort(n, vetor);
	end_t = clock();

	if(mostrar_vetores) {
		printf("Vetor ordenado:\n");
		imprimir_vetor(n, vetor);
		printf("\n");
	}

	double time_taken = (double) (end_t - start_t)/CLOCKS_PER_SEC;
	printf("\nTempo demorado para ordenar: %lf s\n", time_taken);
	printf("%s\n", (is_ordered(n, vetor)) ? "Ordenado!" : "Não Ordenado!");
	
	return 0;
}
