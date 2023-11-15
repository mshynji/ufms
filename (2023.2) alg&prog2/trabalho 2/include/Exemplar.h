#ifndef EXEMPLAR_H
#define EXEMPLAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Livro.h"

// Registro para nó de lista de exemplares emprestados
typedef struct Exemplar {
	int  id;
	char titulo[100];
	char autor[50];
	int  RGA;

	struct Exemplar *prox; // Ponteiro para próximo nó
} Exemplar;

// Declaração das funções
void       emprestarExemplar(Livro *listaLivros, Exemplar *listaExemplares, int id, int RGA);
void       devolverExemplar(Livro *listaLivros, Exemplar *listaExemplares, int id, int RGA);
Exemplar * buscarExemplar(Exemplar *listaExemplares, int id, int RGA);
Exemplar * criarListaExemplares();

#endif
