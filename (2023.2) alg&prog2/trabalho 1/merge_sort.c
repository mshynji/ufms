#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

void merge(u_llong start, u_llong mid, u_llong end, u_llong vetor[]) {
	u_llong ordered_arr[end-start];
	u_llong i = start, j = mid, k = 0;

	while(i < mid && j < end) {
		if(vetor[i] > vetor[j]) {
			ordered_arr[k] = vetor[i];
			i++;
		} else {
			ordered_arr[k] = vetor[j];
			j++;
		}

		k++;
	}

	while(i < mid) {
		ordered_arr[k] = vetor[i];
		i++;
		k++;
	}

	while(j < end) {
		ordered_arr[k] = vetor[j];
		j++;
		k++;
	}

	for(u_llong index = start; index < end; index++)
		vetor[index] = ordered_arr[index-start];
}

void merge_sort(u_llong start, u_llong end, u_llong vetor[]) {
	if(start < end-1) {
		int mid = (start + end)/2;

		merge_sort(start, mid, vetor);
		merge_sort(mid, end, vetor);

		merge(start, mid, end, vetor);
	}
}

int main() {
	srand(time(NULL));

	limpar_tela();

	u_llong n;
	short mostrar_vetores;
	clock_t start_t, end_t;

	printf("MERGE SORT\n\n");

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
	merge_sort(0, n, vetor);
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

