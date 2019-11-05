
// Cria os tipos
typedef struct nodo TNodo;
typedef struct descritor TDescritor;
typedef struct info TInfo;

// Estrutura info
struct info {
	int codigo;
};

// Lista métodos a serem implementados
TDescritor* criaLista();

TInfo* insereInfo(TInfo *info, int num);

void imprimeListaInicio(TDescritor *lista);
void insereInicio(TDescritor *lista, TInfo *info);
void insereFim(TDescritor *lista, TInfo *info);
