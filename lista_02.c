#include <stdio.h>
#include <stdlib.h>

struct lista {
    int clave;
    struct lista *sig;
};

typedef struct lista LISTA;

void llena(LISTA **lis);
void muestra(LISTA **lis);

int main () {
    LISTA *L;
    L = NULL;
    llena(&L);
    muestra(&L);
    return 0;
}

void llena(LISTA **lis){
    int i;
    LISTA *p;
    for (i = 4; i >= 1; i--) {
        p = (LISTA *) malloc(sizeof(LISTA));
        p->clave = i;
        p->sig = *lis;
        *lis = p;
    }
}

void muestra(LISTA **lis){
    LISTA *p;
    int suma, i;
    p = *lis; 
    suma = 0;
    while (p != NULL) {
        printf("%d, ", p->clave);
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("\nsuma = %d\n", suma);
}