
// Cria os tipos
typedef struct nodo TNodo
typedef struct descritor TDescritor
typedef struct info TInfo

// Estrutura info
struct info {
	int codigo;
};

// Lista métodos a serem implementados
TDescritor criaLista();
void imprimeListaInicio(TDescritor *lista);
void insereFim(TDescritor *lista, TInfo *info);
