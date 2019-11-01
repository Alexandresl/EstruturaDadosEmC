#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info TInfo;
typedef struct nodofila TNodoFila;
typedef struct descritorfila TDescritorFila;
struct info{
 int codigo;
 char nome[10];
 float peso;
};
struct nodofila{
 TInfo* info;
 TNodoFila *proximo;
};
struct descritorfila{
 TNodoFila* p_ini;
 TNodoFila* p_fim;
};
TDescritorFila *fila;

TNodofila *aux;
TInfo *i;
i = (TInfo*)malloc(sizeof(TInfo));
aux = (TNodofila*)malloc(sizeof(TNodofila));

i->codigo = 20;
strcpy(i->nome, "João");
i->peso = 70.5

aux->info = i;
aux->proximo = NULL;

fila->p_fim->proximo = aux;
fila->p_fim = aux;


