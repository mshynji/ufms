# Lista de exercícios (24/04)

## Exercício 1.
Faça um programa que dado uma sequência com **n** números inteiros, retorne o maior e menor número da sequência.

### Entrada
A entrada consiste de um inteiro **n** maior que zero, seguido de **n** números inteiros.

### Saída
Você deve imprimir o maior e menor valor da sequência, conforme o exemplo abaixo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3<br/>42<br/>44<br/>22|Maior = 44<br/>Menor = 22|
|8<br/>51<br/>7<br/>789<br/>356<br/>1729<br/>63<br/>87<br/>31|Maior = 1729<br/>Menor = 7|

---

## Exercício 2.
Uma das maneiras de calcular o valor aproximado de $\pi$ é através da seguinte série:

$$ \pi = 4 - {4 \over 3} + {4 \over 5} - {4 \over 7} + {4 \over 9} - {4 \over 11} + ... + {4 \over n} $$

### Entrada
A entrada consiste de um número inteiro **n** ímpar.

### Saída
Dado o valor de **n**, calcule o valor aproximado de $\pi$ com 4 casas decimais.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3     |2.6667|
|5     |3.4667|

---

## Exercício 3.
No sistema de numeração ternário, os únicos algarismos que podem ser utilizados são o 0 (zero), 1 (um) e o 2 (dois). Sendo assim, para representar o número decimal 3 na base ternária temos que utilizar dois algarismos: 10. Seguindo essa lógica, o número decimal 4 em ternário é 11. E assim por diante. Veja abaixo uma tabela com alguns valores em decimal e sua correspondente representação na base ternária.

|Decimal|Ternário|
|:-----:|:------:|
|0      |0       |
|1      |1       |
|2      |2       |
|3      |10      |
|4      |11      |
|5      |12      |
|6      |20      |
|7      |21      |
|8      |22      |
|9      |100     |
|10     |101     |
|44     |1122    |
|1729   |2101001 |

Seu trabalho é fazer um programa que converta números decimais em números ternários.

### Entrada
A entrada consiste em um número inteiro não negativo na base decimal.

### Saída
Você deve imprimir o número convertido para a base ternária.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3      |10   |
|8      |22   |