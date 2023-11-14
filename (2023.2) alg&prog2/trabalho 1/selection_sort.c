#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

u_llong get_max_index(u_llong start, u_llong end, u_llong vetor[]) {
	if(end == start) { return start; }
	
	u_llong cur = end-1;
	u_llong max = get_max_index(start, end-1, vetor);

	if(vetor[max] > vetor[cur]) {
		return max;
	} else {
		return cur;
	}
}

void selection_sort(u_llong cur, u_llong n, u_llong vetor[]) {
	if(cur < n-1 && n > 0) {
		u_llong max = get_max_index(cur, n, vetor);
		trocar(&vetor[cur], &vetor[max]);
		selection_sort(cur+1, n, vetor);
	}
}

int main() {
	srand(time(NULL));

	limpar_tela();

	u_llong n;
	short mostrar_vetores;
	clock_t start_t, end_t;

	printf("SELECTION SORT\n\n");

	printf("Informe a quantidade de itens que deseja ordenar: ");
	scanf("%llu", &n);

	printf("Deseja imprimir os vetores (1) ou somente o tempo final (0)? : ");
	scanf("%hd", &mostrar_vetores);

	u_llong vetor[n];
	preencher_vetor(n, vetor); // Preenchendo vetor com n elementos aleatórios de 1 a n.
	
	if(mostrar_vetores) {
		printf("\n\nVetor desordenado:\n");
		imprimir_vetor(n, vetor);
		printf("\n");
	}

	start_t = clock();
	selection_sort(0, n, vetor);
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
