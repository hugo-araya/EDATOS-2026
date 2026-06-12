#include <stdlib.h>

struct tpila {
    char dato;
    struct tpila *sig;
};

typedef struct tpila PILA;

void crearPila(PILA **pila){
    *pila = (PILA *) malloc(sizeof(PILA));
    (*pila)->sig = NULL;
}

int vaciaPila(PILA *pila){
    return (pila->sig == NULL);
}

void push(PILA *pila, char elem){
    PILA *nuevo;
    nuevo = (PILA *) malloc(sizeof(PILA));
    nuevo->dato = elem;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(PILA *pila, char *elem){
    PILA *aux;
    aux = pila->sig;
    *elem = aux->dato;
    pila->sig = aux->sig;
    free(aux);
}
