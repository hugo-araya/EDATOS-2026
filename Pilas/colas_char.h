#include <stdlib.h>

struct tcola {
    char dato;
    struct tcola *sig;
};

typedef struct tcola COLA;

void crearCola(COLA **cola){
    *cola = NULL;
}

int vaciaCola(COLA *cola){
    return (cola == NULL);
}

void encolar(COLA **cola, char elem){
    COLA *nuevo;
    nuevo = (COLA *) malloc(sizeof(COLA));
    nuevo->dato = elem;
    if (*cola == NULL)
        nuevo->sig = nuevo;
    else {
        nuevo->sig = (*cola)->sig;
        (*cola)->sig = nuevo;
    }
    (*cola) = nuevo;
}

void desencolar(COLA **c1, char *elem){
    COLA *aux;
    *elem = (*c1)->sig->dato;
    if ((*c1) == (*c1)->sig) {
        free(*c1);
        *c1 = NULL;
    }
    else {
        aux = (*c1)->sig;
        (*c1)->sig = aux->sig;
        free(aux);
    }
}
