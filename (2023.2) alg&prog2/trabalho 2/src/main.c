#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "util.h"
#include "Livro.h"
#include "Exemplar.h"

int main() {
	// Cabeça das listas encadeadas
	Livro    *listaLivros     = criarListaLivros();     // Lista de livros na biblioteca
	Exemplar *listaExemplares = criarListaExemplares(); // Lista de exemplares emprestados

	if(listaLivros == NULL || listaExemplares == NULL) {
		// Verificando se ocorreu algum erro na hora de alocar espaço na memória para a cabeça das listas
		printf("Nao foi possivel fazer a alocacao inicial para a cabeca das listas.\n");

		// Limpando espaço alocado na memória pra cabeça das listas (caso um tenha sido alocado e o outro não)
		limparMemoria(&listaLivros, &listaExemplares);
		return -1; // Erro code
	}

	// Parte principal
	int run = 1; // Função que vai verificar se o usuário deseja continuar a execução do código
	
	// Variáveis para consulta, inserção, remoção...
	int  id, RGA, anoPublicacao, quantidade;
	char titulo[100], autor[50], escolha;

	limparTela();     // Limpando tela do usuário (Facilita visualização)
	listarComandos(); // Listando comandos
	
	while(run) {
		// run != 0 -> Rodar
		// run == 0 -> Parar execução

		// Adicionando valores inválidos para as variáveis, para evitar valores inválidos
		id = RGA = anoPublicacao = quantidade = -1;
		strcpy(titulo, "");
		strcpy(autor, "");

		// Lendo escolha do usuário
		printf("\n:: ");
		scanf(" %c", &escolha);

		switch(toupper(escolha)) {
			case 'A': // Adicionar livro
				scanf(" %d \"%99[^\"]\" \"%49[^\"]\" %d %d", &id, titulo, autor, &anoPublicacao, &quantidade);
				adicionarLivro(listaLivros, id, titulo, autor, anoPublicacao, quantidade);
				break;

			case 'R': // Remover exemplar
				scanf(" %d", &id);
				removerExemplarLivro(listaLivros, id);
				break;

			case 'E': // Emprestar exemplar
				scanf(" %d %d", &id, &RGA);
				emprestarExemplar(listaLivros, listaExemplares, id, RGA);
				break;

			case 'D': // Devolver exemplar
				scanf(" %d %d", &id, &RGA);
				devolverExemplar(listaLivros, listaExemplares, id, RGA);
				break;


			case 'P': // Listar livros na biblioteca;
				listarLivros(listaLivros);
				break;

			case 'I': // Listar exemplares emprestados
				listarExemplares(listaExemplares);
				break;

			case 'L': // Limpar tela
				limparTela();
				break;

			case 'H': // Listar comandos
				listarComandos();
				break;

			case 'Q': // Sair
				run = 0;
				break;

			default:  // Escolha inválida
				printf("Escolha invalida.\n");
				break;
		}
	}

	// Limpando memória alocada para as listas
	limparMemoria(&listaLivros, &listaExemplares);

	if(listaLivros == NULL && listaExemplares == NULL)
		printf("Listas limpas da memoria.\n\n");

	return 0;
}
