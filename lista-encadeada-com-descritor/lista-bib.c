struct nodo {
  TInfo *info;
  TNodo *anterior;
  TNodo *proximo;
}

struct descritor {
  TNodo *p_ini;
  TNodo *p_fim;
};

TDescritor* criaLista() {
  TDescritor *lista;
  lista = (TDescritor*)malloc(sizeof(TDescritor));
  lista->p_ini = NULL;
  lista->p_fim = NULL;
  return lista;
}
