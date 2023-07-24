# Lista de exercícios (17/04)

## Exercício 1.
Faça um programa que dada uma sequência de **n** inteiros, calcule a soma de todos seus números pares e a soma de todos os seus números ímpares.

### Entrada
A entrada consiste de um número inteiro **n** maior que zero, representando o tamanho da sequência, seguido de **n** inteiros.

### Saída
Você deve imprimir a soma de todos os números pares e a soma de todos os números ímpares da sequência, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|4<br/>1<br/>2<br/>3<br/>4|Pares: 6<br/>Impares: 4|
|5<br/>4<br/>-2<br/>3<br/>5<br/>1|Pares: 2<br/>Impares: 9|

---

## Exercício 2.
O cosseno de um número real **x** pode ser calculado a partir da seguinte série:

$$ cos(x) = 1 - {x^2 \over  2!} + {x^4 \over 4!} - {x^6 \over 6!} + ... + {x^k \over k!} $$

Onde **k** é um número par.

### Entrada
A entrada consiste de um número real **x** maior que zero e um número par **k** maior ou igual a zero.

### Saída
Dados os valores **x** e **k**, você deve imprimir o cosseno de **x** com 4 casas decimais, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2.4<br/>4|-0.4976|
|5.3<br/>6|-10.9518|

---

## Exercício 3.
Dizemos que um número é um **palíndromo** se ele pode ser da esquerda para a direita ou da direita para a esquerda, sem alterar seu valor. Por exemplo, o número 1221 é um **palíndromo**, mas o número 1337 não.

Seu trabalho é escrever um programa que consiga dizer se um número é um **palíndromo** ou não. Lembre-se que o número deve ser tratado como um inteiro e não deve ser convertido para string.

### Entrada
A entrada consiste de um único valor inteiro maior que zero.

### Saída
Você deve imprimir **"SIM"**, caso o número informado for um palíndromo ou **"NAO"**, caso não seja.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|1221   |SIM  |
|123    |NAO  |