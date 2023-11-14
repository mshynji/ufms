/*
 * Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva
 * a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada,
 * pois cálculo pode resultar em um valor com mais de 15 dígitos.
 *
 *
*/

#include <stdio.h>

long long fatorar(int a) {
	if(a <=1) { return 1; }
	return (long long) (a * fatorar(a-1));
}

int main() {
	int m, n;
	while(scanf("%d %d", &m, &n) != EOF) {
		long long fat_m = fatorar(m);
		long long fat_n = fatorar(n);

		long long soma_fat = fat_m + fat_n;
		printf("%lld\n", soma_fat);
	}

	return 0;
}
