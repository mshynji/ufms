# Lista de exercícios (12/06)

## Exercício 1.
Uma **matriz constante** é uma matriz quadrada tal que a soma dos elementos de cada linha, coluna, diagonal principal e diagonal secundária, possui um mesmo valor. Esse valor é chamado de **constante da matriz**.

Faça um programa que leia um inteiro **n** > 0 correspondente à dimensão de uma matriz quadrada de números inteiros. Em seguida, o programa deve ler as **n** linhas da matriz. Na entrada, os números são separados por espaços em branco.

### Entrada
A entrada consiste de um inteiro **n** que corresponde a dimensão da matriz, seguida de **n** linhasd a matriz.

### Saída
A saída consiste de uma string **"SIM"**, caso o matriz seja constante e **"NAO"**, caso não seja.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|3<br/>8 1 6<br/>3 5 7<br/>4 9 2<br/>|SIM|
|4<br/>1 4 3 2<br/>1 1 1 1<br/>2 3 5 2<br/>4 6 2 1|NAO|

---

## Exercício 2.
Valerian e Laureline vivem no planeta Mül e precisam se comunicar com os demais planetas que estão espalhados pela galáxia. No entanto, esta comunicação depende da distância entre os planetas, pois se a distância é muito alta, o sinal de rádio se perde e não é possível se comunicar. Por esse motivo, cada planeta se comunica sempre com o planeta mais próximo.

Os planetas estão localizados em um espaço 3D, em que cada eixo vai de **0** a **100** anos luz. A intensidade do sinal de rádio depende da distância entre os planetas. Se a distância é de até **20** anos luz, a intensidade é **alta**; acima de **20** anos luz e até **50** anos luz, a intensidade é **média**; se a distância for maior do que **50** anos luz, a intensidade é **baixa**.

Ajude Valerian e Laureline a descobrir a intensidade do sinal de rádio entre cada um dos planetas e o planeta mais próximo, para que eles saibam se será possível estabelecer uma boa comunicação entre eles.

### Entrada
A primeira linha da entrada contém um inteiro 2 <= **n** <= 20 que indica a quantidade de planetas. As **n** linhas seguintes contêm três inteiros separados por um espaço em branco, indicando as coordenadas (**x**, **y**, **z**) dos planetas.

### Saída
A saída deve conter uma linha para cada planeta, indicando a intensidade do sinal de rádio (**"Alta"**, **"Media"**, **"Baixa"**) com relação ao planeta mais próximo.

### Exemplo:
|Entrada|Saída|
|-------|-----|
|5<br/>12 55 58<br/>29 23 2<br/>23 23 3<br/>12 77 60<br/>10 10 99|Media<br/>Alta<br/>Alta<br/>Media<br/>Baixa|
|3<br/>50 55 60<br/>45 50 66<br/>2 4 6|Alta<br/>Alta<br/>Baixa|