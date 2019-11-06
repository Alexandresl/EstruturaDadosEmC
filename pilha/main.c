#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct nodo TNodo;
typedef struct info TInfo;
typedef struct descritor TDescritor;

struct nodo {
	TInfo *info;
	TNodo *proximo;
};

struct info {
	int codigo;
};

struct descritor {
	TNodo *topo;
	int numElementos;
};

TDescritor* criarPilha() {
	TDescritor *pilha;
	pilha = (TDescritor*)malloc(sizeof(TDescritor));
	pilha->topo = NULL;
	pilha->numElementos = 0;	
	return pilha;
}

TInfo* criarInfo(int num) {
	TInfo *info;
	info = (TInfo*)malloc(sizeof(TInfo));
	info->codigo = num;
	return info;	
}

void empilhar(TDescritor *pilha, TInfo *info) {
	TNodo *nodo_aux;
	nodo_aux = (TNodo*)malloc(sizeof(TNodo));
	if (nodo_aux) {
		nodo_aux->info = info;
		if (pilha->topo == NULL) { // Se � o primeiro nodo recebe NULL
			nodo_aux->proximo = NULL;
		} else { // Se n�o o pr�ximo aponta para o elemento abaixo na pilha
			nodo_aux->proximo = pilha->topo;
		}
		// Atualiza o ponteiro para o topo da pilha
		pilha->topo = nodo_aux;
	}
	pilha->numElementos = pilha->numElementos + 1;
}

int desempilhar(TDescritor *pilha) {
	TNodo *nodo_aux;
	TInfo *info = NULL;
	if (pilha->topo == NULL) {
		printf("A pilha est� vazia!");
	} else {
		nodo_aux = pilha->topo;
		info = (TInfo*)malloc(sizeof(TInfo));
		info->codigo = nodo_aux->info->codigo;
		pilha->topo = pilha->topo->proximo;
		free(nodo_aux->info);
		free(nodo_aux);
	}
	pilha->numElementos = pilha->numElementos - 1;
	return pilha->numElementos;
}

void imprimirPilha(TDescritor *pilha) {
	TNodo *p = pilha->topo;
	int i = 0;
	if (pilha->topo == NULL) {
		printf("Pilha vazia.\n");
		return;
	}
	
	while (p) {
		printf("Nodo[%d] = %d\n", i, p->info->codigo);
		p = p->proximo;
		i++;
	}
}

int imprimirNumeroEle(TDescritor *pilha) {
	return pilha->numElementos;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	TDescritor *pilha;
	TInfo *info;
	int iniciou = 0;
	int num, opt;
	
	do {
		printf("Digite a op��o:\n");
		printf("1 - Criar pilha\n");
		printf("2 - Empilhar\n");
		printf("3 - Desempilhar\n");
		printf("4 - Imprimir pilha\n");
		printf("5 - Imprimir n�mero de elementos\n");
		printf("0 - Sair\n");
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				pilha = criarPilha();
				iniciou = 1;
				break;
			case 2:
				if (iniciou) {
					printf("Digite um n�mero para empilhar: ");
					scanf("%d", &num);
					info = criarInfo(num);
					empilhar(pilha, info);	
				} else {
					printf("� necess�rio criar pilha primeiro!\n");
				}
				break;
			case 3:
				printf("\nAgora o n�mero de elementos �: %d\n", desempilhar(pilha));
				break;
			case 4:
				imprimirPilha(pilha);
				break;
			case 5:
				if (iniciou) {
					printf("O n�mero de elementos na pilha �: %d\n", imprimirNumeroEle(pilha));	
				} else {
					printf("� necess�rio criar uma pilha primeiro!\n");
				}
				break;
			case 0:
				break;
			default:
				printf("Op��o inv�lida!\n");
				break;
		}
	} while (opt != 0);
	system("pause");
	return 0;
}
