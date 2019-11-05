#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista-bib.h"

// Função para alocar e preencher um nodo (TInfo)
TInfo* criaInfo (int cod) {
  TInfo *info;
  info = (TInfo*)malloc(sizeof(TInfo));
  info->codigo = cod;
  return info;
}

int main(int argc, char *argv[]) {
	
	TDescritor *lista = NULL; // ponteiro para descritor
	TInfo *info; // nodo aux
	int i = 0;
	lista = criaLista();
	
	for (i = 0; i <= 99; i++) {
		info = (TInfo*)malloc(sizeof(TInfo));
		// preenche info
		info->codigo = i;
		// Adiciona nodo na lista
		insereFim(lista, info);
	}
		
	imprimeListaInicio(lista);
	system("pause");
	return 0;
	
}
