#ifndef LIVRO_H
#define LIVRO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Registro para nós de lista ligada
typedef struct Livro {
	int  id;
	char titulo[100];
	char autor[50];
	int  anoPublicacao;
	int  qtdade;        // Quantidade total de exemplares existentes na biblioteca
	int  qtdisponivel;  // Quantidade de exemplares disponíveis para empréstimo

	struct Livro *prox; // Ponteiro para o próximo nó
} Livro;

// Declaração das funções
void    adicionarLivro(Livro *listaLivros, int id, char *titulo, char *autor, int anoPublicacao, int quantidade);
void    removerExemplarLivro(Livro *listaLivros, int id);
Livro * buscarLivro(Livro *listaLivros, int id);
Livro * criarListaLivros();

#endif
