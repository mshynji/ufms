/*
 * Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores
 * forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições.
 * Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e
 * utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se
 * imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores
 * do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.
*/

#include <stdio.h>

void printar_vetor_par(int n, int vetor[n]) {
    for(int i = 0; i < n; i++)
        printf("par[%d] = %d\n", i, vetor[i]);
}

void printar_vetor_impar(int n, int vetor[n]) {
    for(int i = 0; i < n; i++)
        printf("impar[%d] = %d\n", i, vetor[i]);
}

int main() {
    int i_pares = 0, pares[5];
    int i_impares = 0, impares[5];
    
    for(int i = 0; i < 15; i++) {
        int valor;
        scanf("%d", &valor);
        
        if(valor%2 == 0) {
            pares[i_pares] = valor;
            i_pares++;
        } else {
            impares[i_impares] = valor;
            i_impares++;
        }
        
        if(i_impares == 5) {
            printar_vetor_impar(i_impares, impares);
            i_impares = 0;
        } else if(i_pares == 5) {
            printar_vetor_par(i_pares, pares);
            i_pares = 0;
        }
    }
    
    printar_vetor_impar(i_impares, impares);
    printar_vetor_par(i_pares, pares);
 
    return 0;
}
