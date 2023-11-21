#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include "Livro.h"
#include "Exemplar.h"

void limparTela();
void listarComandos();
void listarLivros(Livro *listaLivros);
void listarExemplares(Exemplar *listaExemplares);
void limparMemoria(Livro **listaLivros, Exemplar **listaExemplares);

#endif
