/*
 * Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do
 * vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.
*/

#include <stdio.h>

void acharValores(int n, float A[n]) {
	for(int i = 0; i < n; i++) {
		if(A[i] <= 10)
			printf("A[%d] = %.1f\n", i, A[i]);
	}
}

int main() {
	float A[100];
	for(int i = 0; i < 100; i++)
		scanf("%f", &A[i]);

	acharValores(100, A);

	return 0;
}
