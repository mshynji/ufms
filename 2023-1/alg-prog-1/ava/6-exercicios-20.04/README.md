# Lista de exercícios (20/04)

## Exercício 1.
Faça um programa que calcule a potência $ x^n $

### Entrada
A entrada consiste de um número real **x** e um número inteiro não negativo **n**.

### Saída
Você deve imprimir o valor da potência com 2 casas decimais, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2.0<br/>7|128.00|
|3.14<br/>4|97.21|

---

## Exercício 2.
Dizemos que uma sequência de números inteiros é crescente se um número é sempre maior que o seu anterior. Por exemplo, a sequência **-2, 1, 4, 5, 6, 7** é uma sequência crescente. Note que se a sequência contém apenas um número, dizemos que ela é crescente.

Uma sequência de números pode ter várias **subsequências crescentes** dentro dela. Por exemplo, a sequência abaixo de 15 números inteiros:

<div style="display: flex; justify-content: center; margin: 10px">
    <span style="color:#ff1f1f; margin-right: 10px;">1 4 7</span>
    <span style="color:#1fff1f; margin-right: 10px;">2 3 4 5</span>
    <span style="color:#4f4fff; margin-right: 10px;">-1 0 1 2 3 9 10</span>
    <span style="color:#ffff00">7</span>
</div>

possui quatro subsequências crescentes dentro dela, destacadas pelas cores **vermelho**, **verde**, **azul** e **amarelo**. O tamanho da subsequência crescente vermelha é 3. A verde tem tamanho 4. A azul tem tamanho 7; e a amarela tem tamanho 1. Logo, o tamanho da **maior subsequência crescente** é **7**.

Faça um programa que leia uma sequência de **n** inteiros e imprima o tamanho da maior subsequência crescente dos números lidos.

### Entrada
A entrada consiste de um número inteiro **n** maior que zero, seguido de **n** números inteiros.

### Saída
Você deve imprimir o tamanho da maior subsequência crescente, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|15<br/>1<br/>4<br/>7<br/>2<br/>3<br/>4<br/>5<br/>-1<br/>0<br/>1<br/>2<br/>3<br/>9<br/>10<br/>7|7|
|5<br/>3<br/>1<br/>2<br/>1<br/>0|2|