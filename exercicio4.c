//Roberto Zerboni Oliari
//Matrícula: 2021200555

#include "lista.h"
#include "lista.c"

Lista *fusaoLista(Lista *L1, Lista *L2){ // O(32(n + m) + 4)
  Lista *L3 = NULL, *aux1 = L1, *aux2 = L2, *aux3 = NULL;  // 4
  while(aux1 != NULL || aux2 != NULL)
  { // n + m
    if (aux1 == NULL) // n + m
    {
      L2 = aux2->prox; // n + m
      if(L3 == NULL) // n + m
      {
        aux3 = aux2; // n + m
        L3 = aux3; // n + m
      }else
      {
        aux3->prox = aux2; // n + m
        aux3 = aux3->prox; // n + m
      }
      aux2 = aux2->prox; // n + m
    }else if (aux2 == NULL) // n + m
    {
      L1 = aux1->prox; // n + m
      if(L3 == NULL) // n + m
      {
        aux3 = aux1; // n + m
        L3 = aux3; // n + m
      }else
      {
        aux3->prox = aux1; // n + m
        aux3 = aux3->prox; // n + m
      }
      aux1 = aux1->prox; // n + m
    }else
    {
      if(aux1->chave >= aux2->chave) // n + m
      {
        L2 = aux2->prox; // n + m
        if(L3 == NULL) // n + m
        {
          aux3 = aux2; // n + m
          L3 = aux3; // n + m
        }else
        {
          aux3->prox = aux2; // n + m
          aux3 = aux3->prox; // n + m
        }
        aux2 = aux2->prox; // n + m
      }else
      {
        L1 = aux1->prox; // n + m
        if(L3 == NULL) // n + m
        {
          aux3 = aux1; // n + m
          L3 = aux3; // n + m
        }else
        {
          aux3->prox = aux1; // n + m
          aux3 = aux3->prox; // n + m
        }
        aux1 = aux1->prox; // n + m
      }
    }
  }
  return L3;
}