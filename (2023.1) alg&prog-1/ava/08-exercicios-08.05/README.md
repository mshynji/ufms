# Lista de exercícios (15/05)

## Exercício 1.
Considere um dado poliédrico contendo 13 faces, enumeradas de 1 a 13. Uma pessoa deseja analisar a frequência com que cada face aparece ao jogar o dado várias vezes. Para isso ela faz um experimento, lançando o dado n vezes, anotando a face que apareceu em cada um dos lançamentos.

Seu trabalho é fazer um programa que dado **n** lançamento de dados, deve informar a frequência, em %, que cada face apareceu. 

### Entrada
A entrada consiste de um número inteiro não negativo **n** seguido de **n** números inteiros.

### Saída
Você deve imprimir, em %, a frequência de cada face, como no exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|15<br/>2 9 8 13 6 13 4 11 11 7 7 5 12 10 11|Face 1: 0.00%<br/>Face 2: 6.67%<br/>Face 3: 0.00%<br/>Face 4: 6.67%<br/>Face 5: 6.67%<br/>Face 6: 6.67%<br/>Face 7: 13.33%<br/>Face8: 6.67%<br/>Face 9: 6.67%<br/>Face 10: 6.67%<br/>Face 11: 20.00%<br/>Face 12: 6.67%<br/>Face 13: 13.33%|
|20<br/>12 2 6 6 8 10 1 11 9 10 3 3 9 11 8 11 5 11 2 1|Face 1: 10.00%<br/>Face 2: 10.00%<br/>Face 3: 10.00%<br/>Face 4: 0.00%<br/>Face 5: 5.00%<br/>Face 6: 10.00%<br/>Face 7: 0.00%<br/>Face 8: 10.00%<br/>Face 9: 10.00%<br/>Face 10: 10.00%<br/>Face 11: 20.00%<br/>Face 12: 5.00%<br/>Face 13: 0.00%|

---

## Exercício 2.
Uma frase **palíndromo** é uma frase que continua igual quando lida de trás para frente, ignorando os espaços entre as palavras. Por exemplo, a frase: **"SOCORRAM ME SUBI NO ONIBUS EM MARROCOS"** é uma frase **palíndromo**.

Seu trabalho é fazer um programa que verifica se uma frase é um **palíndromo** ou não. Tente resolver esta questão sem utilizar o fatiamento/slicing de listas/strings.

### Entrada
A entrada consiste de uma frase com todos os carecteres em maiúsculo.

### Saída
Você deve imprimir **"SIM"**, caso a frase seja um **palíndromo** ou **"NAO"**, caso não seja, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|SOCORRAM ME SUBI NO ONIBUS EM MARROCOS|SIM|
|PALMEIRAS NAO TEM MUNDIAL|NAO|