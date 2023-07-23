# Lista de exercícios (23/03)

## Exercício 1.
Escreva um programa para calcular o valor final de um pedido de pizza. Seguem os valores para os três tamanhos disponíveis:

P: **R$ 15.00**<br/>
M: **R$ 18.50**<br/>
G: **R$ 23.00**

O cliente pode pedir adicional de queijo, que custa **R$ 2.50** para uma pizza pequena e **R$ 4.00** para uma pizza média ou grande. Além disso, o cliente pode optar pela borda recheada, que custa **R$ 5.00**, independente do tamanho.


### Entrada
A entrada consiste de três valores separados por espaço: o tamanho da pizza (**P**, **M** ou **G**), adicional de queijo (**S** ou **N**) e adicional de borda recheada (**S** ou **N**).

### Saída
Você deve imprimir o total do pedido conforme o exemplo abaixo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|P N N|Total: R$ 15.00|
|M S N|Total: R$ 22.50|

---

## Exercício 2.
Escreva um programa que verifica se um ano é [bissexto](https://www.calendarr.com/brasil/ano-bissexto/).

### Entrada
A entrada consiste de um valor inteiro que representa um **ano** >= 0.

### Saída
Você deve imprimir **"Bissexto"**, caso o ano seja bissexto, ou **"Ano qualquer"**, caso não seja.

### Exemplo
|Entrada|Saída|
|-------|-----|
|2000|Bissexto|
|2021|Ano qualquer|