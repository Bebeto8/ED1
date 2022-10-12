//Roberto Zerboni Oliari
//Matrícula: 2021200555

#include "lista.h"
#include "lista.c"

int main(void)
{
  Lista *L = NULL, *L1 = NULL, *L2 = NULL;

  L1 = insereFinal(L1, 1);
  L1 = insereFinal(L1, 5);
  L1 = insereFinal(L1, 7);
  L1 = insereFinal(L1, 9);
  L1 = insereFinal(L1, 11);
  L1 = insereFinal(L1, 13);

  L2 = insereFinal(L2, 2);
  L2 = insereFinal(L2, 2);
  L2 = insereFinal(L2, 4);
  L2 = insereFinal(L2, 6);
  L2 = insereFinal(L2, 10);

  printf("Lista 1: \n");
  imprimeLista(L1);
  printf("\n");
  printf("Lista 2: \n");
  imprimeLista(L2);
  printf("\n");
  printf("Lista Final: \n");
  L = fusaoLista(L1, L2);
  imprimeLista(L);

  return 0;
}
