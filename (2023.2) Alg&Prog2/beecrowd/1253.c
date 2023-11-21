/*
 * Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César,
 * que trocava cada letra pelo equivalente em duas posições adiante no alfabeto
 * (por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos
 * para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras
 * com quaisquer número de posições.
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		int offset;
		char palavra[51];

		scanf(" %s %d", palavra, &offset);

		for(int i = 0; palavra[i] != '\0'; i++) {
			palavra[i] = (palavra[i]-offset < 'A') ? 'Z' - (offset-(palavra[i]-'A')-1) : palavra[i]-offset;
		}

		printf("%s\n", palavra);
	}

	return 0;
}

