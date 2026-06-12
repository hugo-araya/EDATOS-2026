#include <stdio.h>
#include <stdlib.h>

struct lista {
    int clave;
    struct lista *sig;
};

typedef struct lista LISTA;

int main () {
    LISTA *L;
    LISTA *p;
    int i, suma;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--) {
        /* Reserva memoria para un nodo */
        p = (LISTA *) malloc(sizeof(LISTA));
        p->clave = i;
        p->sig = L;
        L = p;
    }

    // Leer la lista
    
    p = L; 
    // Nunca se debe perder el puntero al primer elemento de la lista
    suma = 0;
    while (p != NULL) {
        printf("%d, ", p->clave);
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("\nsuma = %d\n", suma);

    return 0;
}