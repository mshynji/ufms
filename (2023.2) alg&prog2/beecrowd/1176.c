/*
 * Faça um programa que leia um valor e apresente o número de Fibonacci correspondente
 * a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1
 * e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci
 * calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
*/

#include <stdio.h>

long long fib(int n) {
    if(n <= 0) { return 0; }
    if(n == 1) { return 1; }
    
    int i = 0;
    long long a = 0;
    long long b = 1;
    while(i != n) {
        long long temp = b;
        b = a+b;
        a = temp;
        i++;
    }
    
    return a;
}

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int index;
        scanf("%d", &index);
        
        printf("Fib(%d) = %lld\n", index, fib(index));
    }
 
    return 0;
}
