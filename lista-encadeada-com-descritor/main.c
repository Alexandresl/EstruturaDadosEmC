#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "lista-bib.h"

// Função para alocar e preencher um nodo (TInfo)
TInfo* criaInfo (int cod) {
  TInfo *info;
  info = (TInfo*)malloc(sizeof(TInfo));
  info->codigo = cod;
  return info;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	TDescritor *lista = NULL; // ponteiro para descritor
	TInfo *info; // nodo aux
	int opt, num;
	
	do {
		printf("Digite a operação:\n");
		printf("1 - Criar lista\n");
		printf("2 - Insere início\n");
		printf("");
		printf("");
		printf("");
		printf("");
		printf("");
		printf("0 - Sair\n");
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				lista = criaLista();
				break;
			case 2:
				printf("Digite um inteiro para a lista: ");
				scanf("%d", &num);
				insereInfo(info, num);
				insereInicio(lista, info);
				break;
		}
	} while (opt != 0);
	
	system("pause");
	return 0;
	
}
