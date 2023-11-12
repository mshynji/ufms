# Lista de exercícios (19/06)

## Exercício 1.
Faça um programa que leia uma matriz de números inteiros com **m** linhas e **n** colunas, e em seguida mostre o valor da soma dos maiores elementos de cada linha da matriz.

### Entrada
A primeira linha da entrada contém um inteiro **m** e a segunda linha contém um inteiro **n**, a quantidade de linhas e colunas, respectivamente. Em seguida, a matriz **m** por **n** é informada.

### Saída
A saída consiste em imprimir um número inteiro, que é a soma dos maiores elementos de cada linha da matriz.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3<br/>2<br/>5 7<br/>3 1<br/>10 4|20|
|3<br/>4<br/>4 2 8 2<br/>1 6 3 9<br/>8 4 9 1|26|

---

## Exercício 2.
Faça um programa que leia um inteiro **n** > 0 e imprima uma matriz quadrada de dimensão **n** conforme o padrão dos exemplos abaixo.

### Entrada
A entrada consiste apenas de um único inteiro **n** > 0 que representa as dimensões da matriz.

### Saída
O programa deve imprimir a matriz quadrada de dimensão **n**, conforme os exemplos abaixo. Após cada elemento da matriz existe uma tabulação (**"\t"**), inclusive após o último elemento de cada linha da matriz.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|5|$\begin{matrix} 1\phantom{0} & 10 & 11 & 20 & 21 \\ 2\phantom{0} & 9\phantom{0} & 12 & 19 & 22 \\ 3\phantom{0} & 8\phantom{0} & 13 & 18 & 23 \\ 4\phantom{0} & 7\phantom{0} & 14 & 17 & 24 \\ 5\phantom{0} & 6\phantom{0} & 15 & 16 & 25 \end{matrix}$|

---

## Exercício 3.
Uma sequência de números inteiros, sem elementos repetidos, é uma **sequência Turing** se tem apenas um único elemento que é maior que seus vizinhos. Por exemplo, a sequência <b>3 6 11 <span style="color: #ff4141">47</span> 26 13 8</b> é uma **sequência Turing**, pois apenas o número **47**, destacado em vermelho, é maior que seus vizinhos, 11 e 26. Além disso, a sequência <b><span style="color: #ff4141">10</span></b> é uma **sequência Turing**, pois é uma sequência de um único elemento.

Uma matriz é uma **matriz Turing** se todas as suas **linhas** e **colunas** são **sequências Turing**. Seu trabalho é fazer um programa que consiga identificar se uma matriz é uma **matriz Turing**.

### Entrada
A primeira linha contêm os inteiros **m** > 0 e **n** > 0. Nas **m** linhas seguintes são passadas as linhas da matriz. Cada linha contém **n** inteiros separados por espaço.

### Saída
A saída consiste em imprimir **"Turing"** se a matriz for uma matriz Turing, e **"Not Turing"** caso contrário.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3 7<br/>3 6 11 47 26 13 8<br/>7 8 9 10 12 14 15<br/>-2 -1 2 3 -3 -6 -7|Turing|
|3 4<br/>1 3 2 4<br/>5 2 3 6<br/>2 5 7 3|Not Turing|