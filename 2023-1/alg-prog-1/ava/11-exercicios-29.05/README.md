# Lista de exercícios (29/05)

## Exercício 1.
Dizemos que uma sequência de tamanho **n**, onde **n** é par, é **balanceada** se as seguintes somas são iguais:

* A soma do maior elemento com o menor elemento;
* A soma do segundo maior elemento com o segundo menor elemento;
* A soma do terceiro maior elemento com o segundo menor elemento;
* E assim por diante...

Seu trabalho é fazer um programa que verifica se uma sequência é **balanceada** ou não.

### Entrada
A entrada consiste de uma lista ordenada de números inteiros. A sequência sempre vai possuir um número par de elementos.

### Saída
A saída consiste em imprimir **"SIM"** se a sequência é **balanceada** e **"NAO"** se não for.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2 3 6 12 15 16|SIM|
|42 1729|SIM|
|5 9 15 23 55 99|NAO|

---

## Exercício 2.
Dada duas listas **A** e **B**, faça um programa que cria uma terceira lista **C** que consiste na junção dos elementos da lista **A** e lista **B** de forma ordenada. Por exemplo, dada as listas **A = [1, 3, 5]** e **B = [2, 4, 6, 8]**, a  lista resultante será **C = [1, 2, 3, 4, 5, 6, 8]**.

### Entrada
A primeira linha da entrada contém os números inteiros da lista **A**, separados por um espaço em branco. A segunda linha da entrada contém os números inteiros da lista **B**, separados por um espaço em branco. As listas **A** e **B** já estão ordenadas em ordem crescente.

### Saída
A saída consiste da lista **C**, a junção das listas **A** e **B**, como informado no enunciado.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|1 3 5<br/>2 4 6 8|[1, 2, 3, 4, 5, 6, 8]|
|2 3 4 4 4 6 15<br>3 3 7 10 44|[2, 3, 3, 3, 4, 4, 4, 6, 7, 10, 15, 44]|

---

## Exercício 3.
Faça um programa que leia uma frase e uma palavra e responda em quais posições da frase a palavra se encontra. Se a palavra não se encontra na frase, deve-se imprimir "NOT FOUND!".

Por exemplo, seja a frase **"ANA E MARIANA GOSTAM DE BANANA"** e a palavra **"ANA"**, temos que a palavra se encontra na frase nas posições **0**, **10**, **25** e **27**.

**Obs¹:** Não deve ser utilizado o operador in do Python.

**Obs²:** Não devem ser utilizadas funções de manipulações de strings do Python, tais como find(), rfind(), index(), rindex(), count().

**Obs³:** Não deve ser utilizado o fatiamento/slicing de listas/strings, como por exemplo, frase[i:j].

### Entrada
A primeira linha da entrada contém a frase, que é composta de pelo menos uma letra, sempre maiúscula, e pode conter espaços em branco. A segunda linha contém a palavra, que é composta de pelo menos uma letra maiúscula, sem espaços em branco. O tamanho da palavra é sempre menor ou igual ao tamanho da frase.

### Saída
A saída consiste em imprimir as posições na frase em que a palavra se encontra. Se a palavra não se encontra na frase, deve-se imprimir "NOT FOUND!". Veja os exemplos abaixo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|ANA E MARIANA GOSTAM DE BANANA<br/>ANA|0<br/>10<br/>25<br/>27|
|O PALMEIRAS NAO TEM MUNDIAL<br/>HAHAHA|NOT FOUND!|
