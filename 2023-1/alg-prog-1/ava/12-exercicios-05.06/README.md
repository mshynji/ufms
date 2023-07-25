# Lista de exercícios (05/06)

## Exercício 1.
Faça um programa que leia uma matriz de dimensão **m** por **n** e retorne o maior elemento dentro da matriz.

### Entrada
A primeira linha da entrada consiste das dimensões da matriz, **m** e **n**, respectivamente. Seguido disso, existem **m** linhas com **n** inteiros, representando os valores da matriz.


### Saída
A saída consiste em imprimir o maior número dentro da matriz.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3 4<br/>1 -3 5 6<br/>8 -7 13 -20<br/>1 7 2 9|13|
|2 2<br/>1 2<br/>2 1|2|

---

## Exercício 2.
Faça um programa que leia uma matriz quadrada de dimensão **n** por **n** com valores inteiros de 0 a 30 e retorne o número que mais se repete na matriz.

### Entrada
A primeira linha da entrada consiste de um inteiro **n**, que determina o tamanho da matriz. Após isso, temos **n** linhas com **n** inteiros, correspondendo aos valores da matriz.

### Saída
Você deve informar o valor que mais se repete na matriz. Em caso de empate, deve-se imprimir os valores em ordem crescente.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|4<br/>2 4 25 13<br/>7 25 4 6<br/>9 2 22 5<br/>28 25 10 11|25|
|4<br/>3 4 5 4<br/>4 6 3 3<br/>3 5 3 4<br/>3 4 6 4|3<br/>4|

---

## Exercício 3.
Dada uma matriz **A**, podemos obter a sua **matriz transposta**, **$A^t$**, trocando os elementos de lugar. A primeira linha da matriz **A** se torna a primeira coluna da matriz **$A^t$**, a segunda linha da matriz **A** se torna a segunda coluna da matriz **$A^t$**, e assim por diante.

Seu trabalho é fazer um programa que leia uma matriz **A** e responda qual é a sua **matriz transposta**.

### Entrada
A primeira linha consiste em dois inteiros **m** e **n**, que correspondem as dimensões da matriz **A**, seguida de **m** linhas com **n** valores inteiros, representado os valores da matriz.

### Saída
A saida consiste em uma matriz de dimensões **n** por **m**, a **matriz transposta** **$A^t$**.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2 3<br/>1 2 3<br/>4 5 6|1 4<br/>2 5<br/>3 6|
|3 3<br/>5 2 -1<br/>3 8 1<br/>7 4 1|5 3 7<br/>2 8 4<br/>-1 1 1|

---

## Exercício 4.
Faça um programa que leia um número inteiro **n** (0 < **n** < 33) e imprima uma matriz quadrada de dimensão **n** por **n** em forma espiral.

### Entrada
A entrada consiste de um único inteiro **n**, que representa a dimensão da matriz.

### Saída
A saída consiste de uma matriz, com valores alinhados a direita em um campo de tamanho **t**, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|:---:|
|4|$\begin{matrix} \phantom{0}1 & \phantom{0}2 & \phantom{0}3 & \phantom{0}4 \\ 12 & 13 & 14 & \phantom{0}5 \\ 11 & 16 & 15 & \phantom{0}6 \\ 10 & \phantom{0}9 & \phantom{0}8 & \phantom{0}7\end{matrix}$|
|5|$\begin{matrix} \phantom{0}1 & \phantom{0}2 & \phantom{0}3 & \phantom{0}4 & \phantom{0}5 \\ 16 & 17 & 18 & 19 & \phantom{0}6 \\ 15 & 24 & 25 & 20 & \phantom{0}7 \\ 14 & 23 & 22 & 21 & \phantom{0}8 \\ 13 & 12 & 11 & 10 & \phantom{0}9 \end{matrix}$|
