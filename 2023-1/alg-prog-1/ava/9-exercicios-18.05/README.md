# Lista de exercícios (18/05)

## Exercício 1.
Faça um programa que leia uma frase e conte quantas vezes cada letra do alfabeto aparece. Considere apenas as 26 letras do alfabeto, de A a Z.

**Obs:** Não utilize funções prontas do Python, tais como upper(), lower(), count() e find().

### Entrada
A entrada consiste de uma frase que pode conter letras maiúsculas e minúsculas, números e caracteres especiais. A entrada não contem caracteres acentuados e também é garantido que a entrada possui pelo menos um caractere.

### Saída
A saída deve conter a quantidade que cada letra de A a Z apareceu. Veja o exemplo abaixo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|Hello World!|D: 1<br/>E: 1<br/>H: 1<br/>L: 3<br/>O: 2<br/>R: 1<br/>W: 1|
|O palmeiras tem 0 mundiais!|A: 3<br/>D: 1<br/>E: 2<br/>I: 3<br/>L: 1<br/>M: 3<br/>N: 1<br/>O: 1<br/>P: 1<br/>R: 1<br/>S: 2<br/>T: 1<br/>U: 1|

---

## Exercício 2.
Sejam dois vetores de números reais:

$$ a=[u_0,u_1,…,u_{n−1}] $$
$$ b=[v_0,v_1,…,v_{n−1}] $$

ambos de tamanho **n**. O produto entre eles é calculado da seguinte maneira:

$$ a \times b = a_0b_0+a_1b_1+⋯+a_{n−1}b_{n−1} $$

Seu trabalho é fazer um programa que, dado dois vetores de tamanho **n**, calcular seu produto.

### Entrada
A entrada consiste de dois vetores de tamanho **n** não informado, mas que deve ser maior que zero e menor que 1000.

### Saída
A saída deve conter a impressão do produto entre os dois vetores com quatro casas decimais.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|1.0 2.0 3.0<br/>2.0 5.0 1.0|15.0000|
|4.0 2.0<br/>3.0 1.0|14.0000|

---

## Exercício 3.
Um polinômio de grau **n** é definido por $ p(x) = a_nx^n + a_{n−1}x^{n−1} + ⋯ + a_1x + a_0 $, em que $a_0$, $a_1$ ,…, $a_n$ são os coeficientes do polinômio.

Seu trabalho é, dados os coeficientes do polinômio, bem como possíveis valores para **x**, criar um programa que consiga calcular os valores do polinômio.

### Entrada
A entrada consiste de **n** valores reais que correspondem ao coeficiente do polinômio em order crescente. Logo, o primeiro coeficiente é o termo $a_0$, o segundo correspondeo ao termo $a_1$, e assim por diante, até chegar no último termo, correspondendo ao termo $a_{n}$.

Seguido disso, temos o valor **k**, que corresponde ao número de casos de teste, seguido de **k** números reais, os possíveis valores de **x**.

### Saída
Você deve imprimir os valores do polinômio para cada valor de **x** com quatro casas decimais, conforme o exemplo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|5.0 3.0 2.0<br/>4<br/>2.0<br/>3.2<br/>1.4<br/>6.5|19.0000<br/>35.0800<br/>13.1200<br/>109.0000|
|2.0 3.0 3.0 1.0<br/>2<br/>1.0<br/>5.0|9.0000<br/>217.0000|

---

## Exercício 4.
Seja um polinômio de grau **n** dado por $ p(x) = a_nx^n + a_{n−1}x{^n−1} + ⋯ + a_2x^2 + a_1x + a_0 $, em que
$a_0$, $a_1$, …, $a_n$ são os coeficientes reais do polinômio. Calculamos a derivada do polinômio da seguinte maneira:

$$ p′(x) = na_nx^{n−1} + (n−1)a_{n−1}x^{n−2} + ⋯ + 2a_2x+ a_1 $$

### Entrada
A entrada consiste nos coeficientes do polinômio em ordem crescente, de tal forma que o primeiro termo corresponde a $a_0$, o segundo termo corresponde a $a_1$, e assim por diante, onde o **n**-ésimo coeficiente corresponde a $a_n$.

### Saída
Você deve imprimir o valor dos coeficientes com quatro casas decimais da derivada do polinômio informado, de acordo com o exemplo:

### Exemplo:
|Entrada|Saída|
|-------|-----|
|7.0 -3.0 5.0 2.0|-3.0000<br/>10.0000<br/>6.0000|
|4.2 3.1 1.5|3.1000<br/>3.0000|

