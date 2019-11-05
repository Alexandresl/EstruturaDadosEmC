#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista-bib.h"

struct nodo {
  TInfo *info;
  TNodo *anterior;
  TNodo *proximo;
};

struct descritor {
  TNodo *p_ini;
  TNodo *p_fim;
};

TDescritor* criaLista() {
  TDescritor *lista;
  lista = (TDescritor*)malloc(sizeof(TDescritor));
  // p_ini e p_fim = NULL
  lista->p_ini = NULL;
  lista->p_fim = NULL;
  return lista;
}

TInfo* insereInfo (TInfo *info, int num) {
	info = (TInfo*)malloc(sizeof(TInfo));
	info->codigo = num;
	return info;
}

void insereInicio(TDescritor *lista, TInfo *info) {
	//ponteiro para nodo auxiliar
	TNodo *nodo_aux;
	
	if (lista == NULL) {
		printf("Lista não criada!\n");
		return;
	}
	
	// Aloca espaço para nodo
	nodo_aux = (TNodo*)malloc(sizeof(TNodo));
	
	if (nodo_aux) { // Se alocou
		// Primeiro trata a info
		nodo_aux->info = info;
	}
	
}

void insereFim(TDescritor *lista, TInfo *info) {
	// ponteiro para nodo auxiliar
	TNodo *nodo_aux;
	
	if (lista == NULL) {
		return;
	}
	
	// Aloca espaço para nodo
	nodo_aux = (TNodo*)malloc(sizeof(TNodo));
	
	if (nodo_aux) { // Se conseguiu alocar
		nodo_aux->info = info; // Campo info do nodo recebe info recebido por parâmetro
		nodo_aux->proximo = NULL; // Por ser o último nodo
		nodo_aux->anterior = lista->p_fim; // Será ponteiro para último nodo. No caso do primeiro receberá NULL;
		
		if (lista->p_ini == NULL) { // se for o primeiro inicio e fim apontam para o aux
			lista->p_ini = nodo_aux; 
			lista->p_fim = nodo_aux;
		} else {
			lista->p_fim->proximo = nodo_aux; 
			lista->p_fim = nodo_aux;
		}
		
	}
	
}

void imprimeListaInicio(TDescritor *lista) {
	TNodo *p;
	int i = 0;
	if (lista == NULL) {
		printf("Lista não criada.\n");
		return;
	}
	if (lista->p_ini == NULL) {
		printf("Lista vazia.\n");
		return;
	}
	p = lista->p_ini;
	while (p) {
		printf("Nodo[%d] = %d\n", i, p->info->codigo);
		p = p->proximo;
		i++;
	}
}
