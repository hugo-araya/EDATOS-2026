#include <stdio.h>
#include "pilas.h"

int main(){
    PILA *pila;
    int elem;
    crear(&pila);
    if (vacia(pila)) 
        printf("\nPila vacia!\n");
    push(pila, 1);
    pop(pila, &elem);
    printf("Elemento: %d\n", elem);
    return 0;
}
