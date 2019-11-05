#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct nodoPilha TNodoPilha;
typedef struct info TInfo;
typedef struct descritorPilha TDescritorPilha;

struct nodoPilha {
	TInfo *info;
	TInfo *proximo;
};

struct info {
	int codigo;
};

struct descritorPilha {
	TNodoPilha *topo;
	int numElementos;
};

TDescritorPilha* criarPilha() {
	TDescritorPilha *pilha;
	pilha = (TDescritorPilha*)malloc(sizeof(TDescritorPilha));
	return pilha;
}

TInfo* criarInfo(int num) {
	TInfo *info;
	info = (TInfo*)malloc(sizeof(info));
	info->codigo = num;
	return info;	
}

void empilhar(TDescritorPilha *pilha, TInfo *info) {
	
}

int main(int argc, char *argv[]) {
	TDescritorPilha *pilha;
	TInfo *info;
	int num, opt;
	
	do {
		printf("Digite a opção:\n");
		printf("1 - Criar pilha\n");
		printf("2 - Empilhar\n");
		printf("3 - Desempilhar\n");
		printf("4 - Imprimir pilha\n");
		printf("5 - Imprimir número de elementos\n");
		printf("0 - Sair\n");
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				pilha = criarPilha();
				break;
			case 2:
				printf("Digite um número para empilhar: ");
				scanf("%d", &num);
				info = criarInfo(num);
				empilhar(pilha, info);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 0:
				break;
			default:
				printf("Opção inválida!\n");
				break;
		}
	} while (opt != 0);
	
	system("pause");
	return 0;
}
