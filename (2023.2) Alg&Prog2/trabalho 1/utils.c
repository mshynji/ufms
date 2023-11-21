#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "utils.h"

void limpar_tela() {
	if(strcmp(clear, "WIN") == 0) {
		system("cls");
	} else {
		system("clear");
	}
}

void trocar(u_llong *a, u_llong *b) {
	u_llong temp = *a;
	*a = *b;
	*b = temp;
}

void preencher_vetor(u_llong n, u_llong vetor[]) {
	for(u_llong i = 0; i < n; i++)
		vetor[i] = (rand() % n) + 1;
}

void imprimir_vetor(u_llong n, u_llong vetor[]) {
	for(u_llong i = 0; i < n; i++)
		printf("%llu ", vetor[i]);
	printf("\n");
}

int is_ordered(u_llong n, u_llong vetor[]) {
	for(u_llong i = 0; i < n-1; i++) {
		if(vetor[i] < vetor[i+1])
			return 0;
	}

	return 1;
}
