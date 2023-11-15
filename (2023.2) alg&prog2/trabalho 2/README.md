# Trabalho 2

## Descrição
Você foi contratado pelo bibliotecário da biblioteca da UFMS que é muito movimentada e precisa desenvolver um Sistema de Gerenciamento de Biblioteca. A biblioteca tem uma vasta coleção de livros, mas o espaço para armazenamento é limitado. Para otimizar a organização, o bibliotecário decidiu criar um sistema de gerenciamento de livros usando listas ligadas. Cada livro tem um número de identificação única do título bem como informações sobre o título, autor e ano de publicação e a respectiva quantidade de exemplares do título. Além disso, há uma lista ligada contento todos os exemplares emprestados com suas respectivas identificação de títulos, autor e RGA do estudante que tomou emprestado aquele exemplar.

Sua tarefa consiste em criar as funções para Adicionar, Remover e Listar os livros existentes bem como registrar cada empréstimo e devolução de livro no sistema além de eventualmente imprimir a lista de todos livros emprestados em um dado momento. Note que a cada empréstimo você deve consultar a quantidade de exemplares disponível e a cada devolução é necessarário buscar e incrementar a quantidade de exemplares do título. No caso de Adicionar um novo título, verificar se já há aquele título no acervo da biblioteca, e caso positivo apenas acrescentar a quantidade.


## Estruturas de Dados
Você deve implementar as estruturas de dados descritas abaixo. Para a lista de livros existentes no acervo:

```c
typedef struct Livro {
    int id;
    char titulo[100];
    char autor[50];
    int anoPublicacao;
    int qtdade;
    int qtdisponivel;
    struct Livro* prox;
} Livro;
```

Para a lista de exemplares emprestados:

```c
typedef struct Exemplar {
    int id;
    char titulo[100];
    char autor[50];
    int RGA;
    struct Exemplar* prox;
} Exemplar;
```


## Descrição da Entrada
A entrada do programa será composta por um conjunto de comandos. Cada comando será precedido por um caractere que indica a ação a ser realizada:

| Comando | Descrição |
|---------|-----------|
|"A"|Adicionar um livro à biblioteca. Os detalhes do livro (id, título, autor e ano de publicação) seguirão o comando.|
|"R"|Remover um exemplar de livro da biblioteca. Você especificará o ID do livro a ser removido.|
|"P"|Imprimir a lista de livros na biblioteca.|
|"E"|Empréstimo de um exemplar de livro da biblioteca.|
|"D"|Devolução de um exemplar de livro à biblioteca.|
|"I"|Imprimir a lista de livros da biblioteca que estão emprestados.|
|"S"|Sair do programa.|

### Exemplo de Entrada
Exemplo de entrada:

```
A 101 "O Senhor dos Anéis" "J.R.R. Tolkien" 1954 1
A 202 "Harry Potter e a Pedra Filosofal" "J.K. Rowling" 1997 2
P
R 101
P
S
```


## Descrição da Saída
A saída do programa deve refletir as ações executadas. Ao adicionar um livro, você deve confirmar que o livro foi adicionado com sucesso. Ao remover um livro, você deve confirmar se o livro foi encontrado e removido ou se ele não existe. Ao imprimir a lista de livros, você deve listar todos os livros na biblioteca.

```
Livro adicionado com sucesso.
Livro adicionado com sucesso.
Lista de livros na biblioteca:
ID: 101 | O Senhor dos Anéis | J.R.R. Tolkien | 1954
ID: 202 | Harry Potter e a Pedra Filosofal | J.K. Rowling | 1997 2
Livro removido com sucesso.
Lista de livros na biblioteca:
ID: 202 | Harry Potter e a Pedra Filosofal | J.K. Rowling | 1997 2
```

Neste problema, você deve implementar as operações de adição, remoção e listagem de livros usando listas ligadas conforme descritas acima. Certifique-se de lidar com casos de erro, como tentar remover um livro que não existe ou emprestar um livro sem exemplares disponíveis para empréstimos.
