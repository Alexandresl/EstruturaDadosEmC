#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct descritor TDescritor;
typedef struct nodo TNodo;
typedef struct info TInfo;

struct descritor {
	TNodo *p_ini;
	TNodo *p_fim;
};

struct nodo {
	TInfo *info;
	TNodo *prox;
};

struct info {
	int cod;
	char nome[20];
};

TDescritor* iniciaFila() {
	TDescritor *fila;
	fila = (TDescritor*)malloc(sizeof(TDescritor));
	if (fila) {
		fila->p_ini = NULL;
		fila->p_fim = NULL;	
	}
	return fila;
}

TInfo* preencherInfo(int cod, char nome[]) {
	TInfo *info;
	info = (TInfo*)malloc(sizeof(TInfo));
	if (info) {
		info->cod = cod;
		strcpy(info->nome, nome);
	}
	return info;
}

void entrarFila(TDescritor *fila, TInfo *info) {
	
	TNodo *nodo;
	
	nodo = (TNodo*)malloc(sizeof(TNodo));
	
	if (nodo) {
		
		nodo->info = info;
		nodo->prox = NULL;
		
		if ((fila->p_ini == NULL) && (fila->p_fim == NULL)) { // Se for o primeiro nodo
			fila->p_ini = nodo;
		} else {
			fila->p_fim->prox = nodo;
		}
	fila->p_fim = nodo;
	}
	
}

void imprimeFila(TDescritor *fila) {
	TNodo *aux = fila->p_ini;
	int i = 0;
	if (aux == NULL) {
		printf("Fila vazia!");
		return;
	}
	while (aux) {
		printf("Nodo[%d] - %d - %s\n", i, aux->info->cod, aux->info->nome);
		i++;
		aux = aux->prox;
	}
	printf("\n\n");
}

void saiFila(TDescritor *fila) {
	TNodo *aux;
	TInfo *info;
	
	aux = (TNodo*)malloc(sizeof(TNodo));
	
	if (aux) {
		aux = fila->p_ini;
		info = (TInfo*)malloc(sizeof(TInfo));
		
		info->cod = aux->info->cod;
		strcpy(info->nome, aux->info->nome);
		
		fila->p_ini = aux->prox;
		if (aux->prox == NULL) {
			fila->p_fim = NULL;
		}
		free(info);
		free(aux);
	}
	
}

int main(int argc, char *argv[]) {
	
	TDescritor *fila;
	TInfo *info;
	
	fila = iniciaFila();
	
	info = preencherInfo(1, "Primeiro Nome");
	
	entrarFila(fila, info);
	
	imprimeFila(fila);
	
	info = preencherInfo(2, "Segundo Nome");
	
	entrarFila(fila, info);
	
	imprimeFila(fila);
	
	info = preencherInfo(3, "Terceiro Nome");
	
	entrarFila(fila, info);
	
	imprimeFila(fila);
	
	info = preencherInfo(4, "Quarto Nome");
	
	entrarFila(fila, info);
	
	imprimeFila(fila);
	
	printf("[----Saindo da Fila----]\n");
	
	saiFila(fila);
	
	imprimeFila(fila);
	
	saiFila(fila);
	
	imprimeFila(fila);
	
	saiFila(fila);
	
	imprimeFila(fila);
	
	saiFila(fila);
	
	imprimeFila(fila);
	
	return 0;
	
}
