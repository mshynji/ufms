# Lista de exercícios (25/05)

## Exercício 1.
Faça um programa que dada uma lista de números inteiros e um valor inteiro **k**, retorne a quantidade de números que são maiores e menores que **k**.

### Entrada
A entrada consiste de uma lista de valores inteiros em uma linha, seguida de um único valor inteiro **k**.

### Saída
Você deve imprimir a quantidade de números na lista que são maiores e menores que **k**, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|1 6 3 7 9 6 3 6 9 0<br/>4|Maior: 6<br/>Menor:4|
|1 2 3 4 5 6<br/>10|Maior: 0<br/>Menor: 6|

---

## Exercício 2.
Dada duas sequências de números, **A** e **B**, de mesmo comprimento, formadas por números inteiros de 1 a 9, faça um programa que calcula a sequência **C**, que é dada pela soma das sequências **A** e **B** como se fossem números de **n** dígitos.

**Obs:** Note que **A** e **B** devem ser tratados como duas listas de números inteiros e jamais devem ser convertidos para um número inteiro.

### Entrada
A entrada consiste em duas listas de **n** dígitos cada que correspondem as sequências **A** e **B**.

### Saída
Você deve imprimir a sequência **C**, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|8 2 4 3 4 2 5 1<br/>3 3 7 5 2 3 3 7|1 1 6 1 8 6 5 8 8|
|4 4<br/>1 3|5 7|

---

## Exercício 3.
Dada uma frase e uma palavra, verifique se a palavra é uma **subpalavra** da frase. Uma palavra é uma **subpalavra** de uma frase quando ela aparece na frase.

Por exemplo, a frase **"ANA E MARIANA GOSTAM DE BANANA"** e a palavra **"ANA"**. A palavra é, nesse caso, **subpalavra** da frase, como destacado:

<div>
    <span style="color: #ff4f4f">ANA</span> E MARI<span style="color: #ff4f4f">ANA</span> GOSTAM DE B<span style="color: #ff4f4f">ANANA</span>
</div>

Seu trabalho é fazer um programa que consiga verificar se uma palavra é **subpalavra** da frase.

**Obs¹:** Não devem ser utilizadas funções de manipulações de strings do Python, tais como find(), rfind(), index(), rindex(), count().

**Obs²:** Não deve ser utilizado o fatiamento/slicing de listas/strings, como por exemplo, frase[i:j].

### Entrada
A entrada consiste de uma frase e uma palavra. A frase e a palavra são compostas por pelo menos uma letra.

### Saída
Você deve imprimir **"SIM"**, caso a palavra seja **subpalavra** da frase e **"NAO"**, caso não seja.

### Exemplo
|Entrada|Saída|
|-------|-----|
|ANA E MARIANA GOSTAM DE BANANA<br/>ANA|SIM|
|LOOK AT THE STARS LOOK HOW THEY SHINE FOR YOU<br/>YELLOW|NAO|