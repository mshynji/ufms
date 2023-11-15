#include "Exemplar.h"

// Empresta exemplar de um livro e adiciona o emprestimo para a lista de empréstimos em ordem crescente
// com base no Id do livro e RGA do estudante
void emprestarExemplar(Livro *listaLivros, Exemplar *listaExemplares, int id, int RGA) {
	Livro *livro = buscarLivro(listaLivros, id); // Buscando livro

	if(livro == NULL) {
		// Verificando se o livro existe na biblioteca
		printf("Nao foi possivel achar livro com Id %d.\n", id);
		return;
	}

	if(buscarExemplar(listaExemplares, id, RGA) != NULL) {
		// Verificando se um exemplar do livro já foi emprestado para o estudante
		printf("Um exemplar do livro \"%s\" ja foi emprestado para o RGA %d.\n", livro->titulo, RGA);
		return;
	}

	if(livro->qtdisponivel < 1) {
		// Verificando se existem exemplares disponíveis para serem emprestados
		printf("Nao existem exemplares disponiveis do livro \"%s\".\n", livro->titulo);
		return;
	}

	// Registro do novo empréstimo
	Exemplar *novo = (Exemplar *) malloc(sizeof(Exemplar));

	if(novo == NULL) {
		// Verificando se ocorreu algum erro na hora da alocação dinâmica
		printf("Nao foi possivel alocar espaco na memoria para o novo emprestimo.\n");
		return;
	}

	// Copiando valores do livro para o novo registro
	novo->id = livro->id;
	strcpy(novo->titulo, livro->titulo);
	strcpy(novo->autor, livro->autor);
	novo->RGA = RGA; // RGA do estudante
	novo->prox = NULL;

	// Removendo um dos exemplares do livro
	livro->qtdisponivel--;

	// Procurando local onde o novo empréstimo será guardado
	Exemplar *p = listaExemplares;       // Iteradores
	Exemplar *q = listaExemplares->prox;

	while(q != NULL && q->id <= id) {
		// Se o id do livro dos empréstimos for igual, verificar se o RGA é maior
		if(q->id == id && q->RGA > RGA)
			break;
		
		p = q;
		q = q->prox;
	}

	// p -> novo -> q
	p->prox    = novo;
	novo->prox = q;

	// Mensagem de sucesso
	printf("Emprestimo realizado com sucesso.\n");
}

// Função que devolve livro, removendo o registro do empréstimo da lista de empréstimos
void devolverExemplar(Livro *listaLivros, Exemplar *listaExemplares, int id, int RGA) {
	Livro *livro = buscarLivro(listaLivros, id); // Buscando livro

	if(livro == NULL) {
		// Verificando se o livro existe
		printf("Nao foi possivel achar o livro com Id %d.\n", id);
		return;
	}

	// Buscando registro do empréstimo
	Exemplar *exemplar = buscarExemplar(listaExemplares, id, RGA);

	if(exemplar == NULL) {
		// Verificando se o empréstimo existe
		printf("Nenhum exemplar do livro \"%s\" foi emprestado para o RGA %d.\n", livro->titulo, RGA);
		return;
	}

	// Registro que antecede o registro
	Exemplar *p = listaExemplares;
	
	while(p->prox != exemplar)
		p = p->prox;

	// Incrementando a quantidade de exemplares disponíveis
	livro->qtdisponivel++;

	// Removendo registro da lista de empréstimos
	p->prox = exemplar->prox;
	free(exemplar); // Limpando conteúdo do endereço da memória

	// Mensagem de sucesso
	printf("Exemplar devolvido com sucesso!\n");
}

// Função que busca um exemplar de um livro com base no seu Id e RGA do estudante
// Caso o livro não exista, ou não tenha sido emprestado para o RGA informado, retorna NULL
Exemplar * buscarExemplar(Exemplar *listaExemplares, int id, int RGA) {
	Exemplar *exemplar = listaExemplares->prox; // Iterador

	// Iterando sobre a lista até chegar ao fim ou o registro desejado ser encontrado
	while(exemplar != NULL && (exemplar->id != id || exemplar->RGA != RGA))
		exemplar = exemplar->prox;

	return exemplar; // Retornando empréstimo (NULL se não existir)
}

// Função para criar a cabeça da lista encadeada
Exemplar * criarListaExemplares() {
	// Cabeça da lista
	Exemplar *listaExemplares = (Exemplar *) malloc(sizeof(Exemplar));

	if(listaExemplares == NULL) {
		// Verificando se ocorreu algum erro na hora de alocar espaço na memória pra cabeça da lista
		printf("Nao foi possivel alocar espaco na memoria para a cabeca da lista.\n");
		return NULL;
	}

	return listaExemplares; // Retornando ponteiro para a cabeça da lista
}
