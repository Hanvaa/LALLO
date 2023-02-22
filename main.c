#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "../../../Funzioni.h"
void main()
{
    int N;
    int *p;//null, posso puntare un indirizzo di tipo intero

    N = 10;
    p = &N;
    printf("\nEsercizio 1: Utilizzo dei puntatori!\n");

    printf("\n\nValore di N: %d",N);
    printf("\n\nIndirizzo di N: %p",&N);

    printf("\nValore del contenuto del puntatore: %d\n", *p);//Così accedo direttamente al valore del mio puntatore
    printf("\nIndirizzo contenuto nel puntatore: %p\n",p);
    printf("\nIndirizzo del Puntatore: %p\n",&p);//Dove è salvato l'indirizzo del puntatore

    ///Cambio il contenuto del puntatore
    *p *= 2;

    printf("\nValore del contenuto del puntatore: %d", *p);

    printf("\n\n");
}
