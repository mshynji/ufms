#ifndef UTILS_H
#define UTILS_H

#ifdef WIN32
#define clear "WIN"
#else
#define clear "LINUX"
#endif

typedef unsigned long long u_llong;

void limpar_tela();
void trocar(u_llong *a, u_llong *b);
void preencher_vetor(u_llong n, u_llong vetor[]);
void imprimir_vetor(u_llong n, u_llong vetor[]);
int is_ordered(u_llong n, u_llong vetor[]);

#endif
