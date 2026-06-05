#include <stdlib.h>

struct lista {
    int clave;
    struct lista *sig;
};

typedef struct lista LISTA;

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

void muestra(LISTA *lis){
    LISTA *p;
    int i;
    p = lis; 
    while (p != NULL) {
        printf("%d, ", p->clave);
        p = p->sig;
    }
}

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int cuentaNodos(LISTA *lis){
    int cont = 0;
    LISTA *p;
    p = lis;
    while (p != NULL){
        cont++;
        p = p->sig;
    }
    return cont;
}

void agregaFinal(LISTA **lis, int elem){
    LISTA *p, *q;
    p = *lis;
    if (p == NULL){
        q = (LISTA *) malloc(sizeof(LISTA));
        q->clave = elem;
        q->sig = NULL;
        *lis = q;
    }
    else{
        while (p->sig != NULL){
            p = p->sig;
        }
        q = (LISTA *) malloc(sizeof(LISTA));
        q->clave = elem;
        q->sig = NULL;
        p->sig = q;
    }
}

void agregaInicio(LISTA **lis, int elem){
    LISTA *p, *q;
    p = *lis;
    if (p == NULL){
        q = (LISTA *) malloc(sizeof(LISTA));
        q->clave = elem;
        q->sig = NULL;
        *lis = q;
    }
    else{
        q = (LISTA *) malloc(sizeof(LISTA));
        q->clave = elem;
        q->sig = *lis;
        *lis = q;
    }
}
