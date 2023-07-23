# Lista de exercícios (10/04)

## Exercício 1.
Um número primo é um número natural, maior do que 1, que possui apenas dois divisores: 1 e ele mesmo.

Exemplos de números primos: 2, 3, 5, 7, 11, 13, 17, 19, 23, e 29.

Quando um número não é primo, dizemos que ele é um número composto.

### Entrada
A entrada consiste de um valor natural **n** maior que 1.

### Saída
Você deve imprimir **"Primo"**, caso o valor **n** possua apenas dois divisores ou **"Composto"**, caso possua mais de dois divisores.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2      |Primo|
|3   |Composto|

---

## Exercício 2.
Dado um número inteiro **n** > 0 temos que o **subnúmero par** de **n** é o número gerado a partir da remoção dos dígitos ímpares que aparecem em **n**.

Por exemplo, se **n** = 2546718, o **subnúmero par** de **n** é 2468.

Se **n** = 519 dizemos que o **subnúmero par** de **n** é 0, pois **n** não possui dígito par.

### Entrada
A entrada consiste de um valor **n** inteiro e maior que zero.

### Saída
Você deve imprimir o **subnúmero par** de **n**.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2546718|2468 |
|519    |0    |
|350327 |2    |

---

## Exercício 3.
O fatorial de um número inteiro não negativo, denotado por **n**!, é calculado da seguinte maneira:

**n**!=**n**×(**n**−1)×(**n**−2)×⋯×2×1

Note que definimos 0! = 1.

### Entrada
A entrada consiste de um valor inteiro não negativo **n**, onde 0 <= **n** <= 100.

### Saída
Você deve imprimir o fatorial de **n**.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|0      |1    |
|1      |1    |
|5      |120  |

---

## Exercício 4.
O **n**-ésimo número harmônico é definido pela seguinte fórmula:

$$ H_n = 1 + {1 \over 2} + {1 \over 3} + ... + {1 \over n}$$

### Entrada
A entrada consiste de um valor inteiro **n** maior que zero. 

### Saída
Você deve informar o **n**-ésimo número harmônico com 4 casas decimais, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|2      |1.5000|
|5      |2.2833|
|10     |2.9290|

---

## Exercício 5.
A constante **e** é conhecida como número de Euler. Podemos calcular **e** elevado a **x** pela seguinte série:

$$ e^x = x^0 + {x^1 \over 1!} + {x^2 \over 2!} + ... + {x^n \over n!}$$

### Entrada
A entrada consiste de um valor racional **x** maior que zero e um valor inteiro **n** maior ou igual a zero. 

### Saída
Você deve imprimir o número de Euler com quatro casas decimais, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|1.0<br/>4|2.7083|
|1.6<br/>5|4.9231|