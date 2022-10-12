//Roberto Zerboni Oliari
//Matrícula: 2021200555

#include "lista.h"
#include "lista.c"

int main(void)
{
  Lista *L = NULL;
  L = insereFinal(L, 1);
  L = insereFinal(L, 4);
  L = insereFinal(L, 1);
  L = insereFinal(L, 8);
  L = insereFinal(L, 4);
  L = insereFinal(L, 3);
  L = insereFinal(L, 1);


  printf("Lista inicialmente: \n");
  imprimeLista(L);

  L = excluiRepetido(L);

  printf("Lista depois de excluir os repetidos: \n");
  imprimeLista(L);

  return 0;
}
