# Estrutura de Dados em C

## Fila

### Características

- Descritor com p_ini e p_fim;
- Métodos mínimos a implementar: criaFila(), entra(Descritor, info) e sai(Descritor);
- Nodo com ponteiro próximo apontando para o fim da fila, deste modo, o nodo que entra, terá elemento próximo apontando para NULL;
- Método "entra", insere nodo no fim da fila;
- Método "sai", Retira nodo no início da fila;

## Pilha

### Características

- Descritor apenas com topo;
- Métodos mínimos a implementar: criarPilha(), empilhar(Descritor, info) e desempilhar(Descritor);
- Nodo com ponteiro proximo apontando paro nodo que está embaixo na pilha;
- Método empilha e desempilha trabalham apenas com o nodo que está no topo.

<!-- #### entra(Descritor, info)

- Cria um nodo;
- Aloca um nodo;
- se alocou:

  - atribui a info;
  - o proximo recebe NULL;
  - se for o primeiro nodo p_ini é modificado recebendo o aux;
  - senao o p_fim->proximo recebe aux e o p_fim recebe aux;

  #### sair(Descritor)

  - cria um nodo e uma info com NULL;
  - Verifica se a fila não está vazia;
  - aux recebe o primeiro nodo;
  - aloca info
  - copia info (ponteiro com ponteiro);
  - p_ini recebe o proximo item;
  - se for o último p_fim também recebe null
  - Free no aux->info e no aux -->
