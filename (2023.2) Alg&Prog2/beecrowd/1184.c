/*
 * Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e
 * uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando
 * somente aqueles elementos que estão abaixo da diagonal principal da matriz, conforme
 * ilustrado abaixo (área verde).
*/

#include <stdio.h>

float soma(float M[12][12]) {
	float soma = 0.0f;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < i; j++)
			soma += M[i][j];
	}

	return soma;
}

float media(float M[12][12]) {
	int elementos = 0;
	float soma = 0.0f;

	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < i; j++) {
			soma += M[i][j];
			elementos++;
		}
	}

	return soma/elementos;
}

int main() {
	char O;
	scanf(" %c", &O);

	float M[12][12];
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++)
			scanf(" %f", &M[i][j]);
	}

	float resultado = 0.0f;
	if(O == 'S')
		resultado = soma(M);
	else
		resultado = media(M);

	printf("%.1f\n", resultado);

	return 0;
}

