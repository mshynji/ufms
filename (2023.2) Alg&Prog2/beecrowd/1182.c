/*
 * Neste problema você deve ler um número que indica uma coluna de uma matriz na
 * qual uma operação deve ser realizada, um caractere maiúsculo, indicando a
 * operação que será realizada, e todos os elementos de uma matriz M[12][12].
 * Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área
 * verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada
 * do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser
 * considerados na operação.
*/

#include <stdio.h>

float soma(int col, float M[12][12]) {
    float soma = 0;
    for(int i = 0; i < 12; i++)
        soma += M[i][col];
    
    return soma;
}

float media(int col, float M[12][12]) {
    return soma(col, M)/12;
}

int main() {
    int col;
    char T;
    scanf("%d %c", &col, &T);
    
    float M[12][12];
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    }
    
    float resultado = 0.0f;
    if(T == 'S')
        resultado = soma(col, M);
    else
        resultado = media(col, M);
    
    printf("%.1f\n", resultado);
 
    return 0;
}

