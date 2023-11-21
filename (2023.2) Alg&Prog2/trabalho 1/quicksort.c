#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

u_llong get_pivot(u_llong start, u_llong end, u_llong vetor[]) {
	u_llong pivot_index = start;
	u_llong pivot = vetor[end-1];

	for(u_llong i = start; i < end-1; i++) {
		if(vetor[i] >= pivot) {
			u_llong temp = vetor[i];
			vetor[i] = vetor[pivot_index];
			vetor[pivot_index] = temp;

			pivot_index++;
		}
	}

	u_llong temp = vetor[end-1];
	vetor[end-1] = vetor[pivot_index];
	vetor[pivot_index] = temp;

	return pivot_index;
}

void quicksort(u_llong start, u_llong end,u_llong vetor[]) {
	if(start < end-1 && end > 0) {
		u_llong pivot = get_pivot(start, end, vetor);

		quicksort(start, pivot, vetor);
		quicksort(pivot+1, end, vetor);
	}
}

int main() {
	srand(time(NULL));

	limpar_tela();

	u_llong n;
	short mostrar_vetores;
	clock_t start_t, end_t;

	printf("QUICKSORT\n\n");

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
	quicksort(0, n, vetor);
	end_t = clock();

	if(mostrar_vetores) {
		printf("Vetor ordenado:\n");
		imprimir_vetor(n, vetor);
		printf("\n");
	}	

	double time_spent = (double) (end_t - start_t)/CLOCKS_PER_SEC;
	printf("\nTempo demorado para ordenar: %lf s\n", time_spent);
	printf("%s\n", (is_ordered(n, vetor)) ? "Ordenado!" : "Não Ordenado!");

	return 0;
}

