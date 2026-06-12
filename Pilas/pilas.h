#include <stdlib.h>

struct tpila {
    int dato;
    struct tpila *sig;
};

typedef struct tpila PILA;

void crear(PILA **pila){
    *pila = (PILA *) malloc(sizeof(PILA));
    (*pila)->sig = NULL;
}

int vacia(PILA *pila){
    return (pila->sig == NULL);
}

void push(PILA *pila, int elem){
    PILA *nuevo;
    nuevo = (PILA *) malloc(sizeof(PILA));
    nuevo->dato = elem;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(PILA *pila, int *elem){
    PILA *aux;
    aux = pila->sig;
    *elem = aux->dato;
    pila->sig = aux->sig;
    free(aux);
}
