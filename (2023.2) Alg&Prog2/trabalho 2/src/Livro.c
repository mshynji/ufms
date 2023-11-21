#include "Livro.h"

// Função que adiciona livro para lista encadeada com cabeça
// Rebe parâmetros(id, titulo, autor, anoPublicacao e quantidade) e adiciona um livro para a lista em ordem
// crescente com base no Id do livro
void adicionarLivro(Livro *listaLivros, int id, char *titulo, char *autor, int anoPublicacao, int quantidade) {
	if(buscarLivro(listaLivros, id) != NULL) {
		// Verificando se já existe livro com o Id informado
		printf("Um livro com o Id %d ja existe.\n", id);
		return;
	}

	// Registro do novo livro
	Livro *novo = (Livro *) malloc(sizeof(Livro));

	if(novo == NULL) {
		// Verificando alocação dinâmica para o novo livro, mas não deletando
		// a lista de livros, pois não quero perder a lista inteira por causa disso
		printf("Nao foi possivel alocar espaco na memoria para o novo livro.\n");
		return;
	}

	// Copiando valores informados para o livro
	novo->id = id;
	strcpy(novo->titulo, titulo); // A função strcpy é meio "insegura", já que ela permite copiar uma string para
	strcpy(novo->autor, autor);   // uma variável menor, mas já que as duas tem 100 chars, não tem problema!
	novo->anoPublicacao = anoPublicacao;
	novo->qtdade = novo->qtdisponivel = quantidade;
	novo->prox = NULL;
	
	// Procurando posição do novo livro na lista
	Livro *p = listaLivros;       // Isso faz com que mesmo que lista esteja vazia, o dummy node vai apontar pro
	Livro *q = listaLivros->prox; // novo valor

	while(q != NULL && q->id < id) {
		// Iterando sobre lista de livros enquanto não chegar no fim e enquanto
		// o Id do livro atual for menor que o Id do novo livro
		p = q;
		q = q->prox;
	}

	// p -> novo -> q
	p->prox    = novo;
	novo->prox = q;
	
	// Mensagem de sucesso
	printf("Livro adicionado com sucesso!\n");
}

// Função que remove um livro dentro de uma lista com base no Id
// Caso o livro não exista dentro da lista, o mesmo é informado
void removerExemplarLivro(Livro *listaLivros, int id) {
	Livro *livro = buscarLivro(listaLivros, id);

	if(livro == NULL) {
		// Verificando se existe livro com o Id informado
		printf("Nao foi possivel encontrar um livro com Id %d\n", id);
		return;
	}

	// Tentando remover um exemplar do livro
	if(livro->qtdisponivel > 0) {
		// Verificando se existe pelo menos um exemplar na biblioteca
		livro->qtdade--;       // Removendo da quantidade total de exemplares
		livro->qtdisponivel--; // Removendo da quantidade de exemplares disponíveis
	}

	if(livro->qtdade == 0) {
		// Verificando se todos os exemplares do livro foram removidos
		// Registro que vem antes do livro a ser removido
		Livro *p = listaLivros;

		while(p->prox != livro)
			p = p->prox;

		// Removendo livro da lista
		p->prox = livro->prox;
		free(livro); // Limpando conteúdo do endereço da memória 
	}

	// Mensagem de sucesso
	printf("Exemplar removido com sucesso!\n");
}

// Função que busca e retorna um livro dentro de uma lista com base no Id
// Se o livro não existir, retorna NULL
Livro * buscarLivro(Livro *listaLivros, int id) {
	Livro *livro = listaLivros->prox; // Iterador da lista

	// Iterando até chegar no final da lista ou até achar o livro com o Id informado
	while(livro != NULL && livro->id != id)
		livro = livro->prox;

	return livro; // Retornando livro (NULL se não existir)
}

// Função para criar a cabeça de uma lista encadeada
Livro * criarListaLivros() {
	// Criando cabeça da lista de livros (dummy node)
	Livro *listaLivros = (Livro *) malloc(sizeof(Livro));

	if(listaLivros == NULL) {
		// Verificando se houve algum erro na hora de alocar espaço na memória para a cabeça da lista
		printf("Nao foi possivel alocar espaco pra cabeça da lista.\n");
		return NULL;
	}

	return listaLivros; // Retornando um ponteiro pra cabeça da lista
}
