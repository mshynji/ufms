/*
 * Devido ao grande número de reclamações, a companhia telefônica de São Petersburgo
 * está sendo obrigada a investir pesado na melhora de seus serviços. Para isso a
 * companhia decidiu diminuir o orçamento de alguns setores para aumentar o de outros
 * mais essenciais. Um dos setores que terá seu orçamento reduzido é o de impressão de
 * listas telefônicas.
 *
 * Com um orçamento reduzido, o setor de impressão de listas telefônicas não consegue
 * comprar toner suficiente para imprimir as listas completas. Como os números de telefone
 * são impressos alinhados na vertical, foi sugerida a seguinte solução: a partir do
 * segundo número de telefone impresso, os dígitos iniciais do próximo número a ser impresso
 * que coincidirem com os do número acima são omitidos, ficando apenas um espaço em branco.
 * Por exemplo, para os números 535456, 535488, 536566 e 835456 a impressão é a seguinte:
 *
 * 5 3 5 4 5 6
 *         8 8
 *     6 5 6 6
 * 8 3 5 4 5 6
 *
 * Note que esta impressão economizou a impressão de 6 caracteres. A companhia telefonica
 * cogitou também não imprimir os sufixos repetidos, mas nos testes feitos viram que a
 * resposta não foi boa para o usuário e decidiram, portanto, fazer apenas a eliminação
 * em prefixos. Para saber se a economia será suficiente, o setor de impressão quer saber
 * o número máximo de caracteres que podem ser omitidos. No entanto, como em qualquer
 * cidade grande, são vários os números telefônicos e eles não querem gastar homens-hora
 * para calcular manualmente este valor. Então cabe a você, novo empregado da companhia,
 * automatizar a economia feita pelo toner, no número de caracteres.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char tel[200];
} Telefone;

int get_pivot_index(Telefone telefones[], int start, int end) {
	char *pivot = telefones[end-1].tel;
	int pivot_index = start;
	
	for(int i = start; i < end-1; i++) {
		if(strcmp(telefones[i].tel, pivot) <= 0) {
			Telefone temp = telefones[i];
			telefones[i] = telefones[pivot_index];
			telefones[pivot_index] = temp;

			pivot_index++;
		}
	}

	Telefone temp = telefones[end-1];
	telefones[end-1] = telefones[pivot_index];
	telefones[pivot_index] = temp;

	return pivot_index;
}

void quicksort(Telefone telefones[], int start, int end) {
	if(start < end-1) {
		int pivot_index = get_pivot_index(telefones, start, end);
		quicksort(telefones, start, pivot_index);
		quicksort(telefones, pivot_index+1, end);
	}
}

int get_digitos(int n, Telefone telefones[n]) {
	int digitos = 0;

	for(int i = 1; i < n; i++) {
		for(int j = 0; telefones[i].tel[j] != '\0'; j++) {
			if(telefones[i].tel[j] != telefones[i-1].tel[j]) { break; }
			digitos++;
		}
	}

	return digitos;
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		Telefone telefones[n];
		for(int i = 0; i < n; i++)
			scanf(" %s", &telefones[i].tel);
		
		quicksort(telefones, 0, n);
		printf("%d\n", get_digitos(n, telefones));
	}

	return 0;
}

