#include "util.h"

// Função para limpar a tela do usuário com base no sistema operacional
void limparTela() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

// Função para listar os comando disponíveis para o usuário
void listarComandos() {
	printf("Adicionar Livro:    A (ID) \"(TITULO)\" \"(AUTOR)\" (ANO PUBLICACAO) (N. EXEMPLARES)\n");
	printf("Remover exemplar:   R (ID)\n");
	printf("Emprestar exemplar: E (ID) (RGA)\n");
	printf("Devolver exemplar:  D (ID) (RGA)\n");
	printf("Listar livros:      P\n");
	printf("Listar exemplares:  I\n");
	printf("Listar comandos:    H\n");
	printf("Limpar tela:        L\n");
	printf("Sair:               Q\n");
}

// Função para listar livros na biblioteca
void listarLivros(Livro *listaLivros) {
	Livro *livro = listaLivros->prox; // Iterador

	printf("Lista de livros na biblioteca:\n");
	while(livro != NULL) {
		// Rodando até a lista chegar ao fim

		// Printando informações do livro
		printf("Id: %d | %s | %s | (%d) | ", livro->id, livro->titulo, livro->autor, livro->anoPublicacao);
		printf("Exemplares disponíveis: %d de %d\n", livro->qtdisponivel, livro->qtdade);

		livro = livro->prox; // Passando para o próximo
	}
}

// Função para listar exemplares emprestados
void listarExemplares(Exemplar *listaExemplares) {
	Exemplar *exemplar = listaExemplares->prox; // Iterador
	
	printf("Lista de exemplares emprestados:\n");
	while(exemplar != NULL) {
		// Rodando até a lista chegar ao fi
		
		// Printando informações do exemplar emprestado
		printf("Id: %d | %s | %s | RGA: %d\n", exemplar->id, exemplar->titulo, exemplar->autor, exemplar->RGA);

		exemplar = exemplar->prox; // Passando para o próximo
	}
}

// Função para limpar lista de livros e exemplares da memória
void limparMemoria(Livro **listaLivros, Exemplar **listaExemplares) {
	// Limpando lista de livros
	Livro *removerLivro = NULL;
	
	while((*listaLivros) != NULL) {
		// Iterando sobre a lista até não ter mais nenhum elemento
		removerLivro   = (*listaLivros); // Guardando nó atual
		(*listaLivros) = (*listaLivros)->prox; // Passando para o próximo nó

		free(removerLivro); // Limpando conteúdo do endereço do nó guardado
	}

	// Limpando lista de exemplares emprestados
	Exemplar *removerExemplar = NULL;

	while((*listaExemplares) != NULL) {
		// Iterando sobre a lista até não ter mais nenhum elemento
		removerExemplar    = (*listaExemplares); // Guardando nó atual
		(*listaExemplares) = (*listaExemplares)->prox; // Passando para o próximo nó

		free(removerExemplar); // Limpando conteúdo do endereço do nó guardado
	}
}
