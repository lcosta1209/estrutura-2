#include <stdio.h>

#define TAM 10

int main() {

  /*PILHA*/

  int pilha[TAM];
  int topo = -1;
  
  topo++;
  pilha[topo] = 1;

  topo++;
  pilha[topo] = 2;

  topo++;
  pilha[topo] = 3;

  for (int i = topo; i >= 0; i--) {
    printf("%d ", pilha[i]);
  }

  printf("Removido: %d", pilha[topo]);
  topo--;

  for (int i = topo; i >= 0; i--) {
    printf("%d ", pilha[i]);
  }
  /*FILA  */

  int fila[TAM];
  int inicio = 0;
  int fim = -1;
  
  fim++;
  fila[fim] = 1;

  fim++;
  fila[fim] = 2;

  fim++;
  fila[fim] = 3;

  for (int i = inicio; i <= fim; i++) {
    printf("%d ", fila[i]);
  }

  printf("Removido: %d\n", fila[inicio]);
  inicio++;

  for (int i = inicio; i <= fim; i++) {
    printf("%d ", fila[i]);
  }

  /* DEQUE  */

  int deque[TAM];
  int ini = 5;
  int fimd = 4;

  ini--;
  deque[ini] = 50;

  ini--;
  deque[ini] = 40;

  fimd++;
  deque[fimd] = 60;

  fimd++;
  deque[fimd] = 70;

  for (int i = ini; i <= fimd; i++) {
    printf("%d ", deque[i]);
  }

  printf("Removido inicio: %d\n", deque[ini]);
  ini++;

  printf("Removido fim: %d\n", deque[fimd]);
  fimd--;

  for (int i = ini; i <= fimd; i++) {
    printf("%d ", deque[i]);
  }

  return 0;
}
