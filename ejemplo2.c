#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

void agregarInicio(Nodo** cabeza, int nuevoValor);

int main() {
    Nodo* miLista = NULL; // Lista vacía

    agregarInicio(&miLista, 10); // Pasamos la dirección del puntero (&)
    agregarInicio(&miLista, 20); 

    printf("El primer elemento es: %d\n", miLista->dato); // Imprime 20

    return 0;
}


// El doble asterisco (**) permite modificar el puntero original
void agregarInicio(Nodo** cabeza, int nuevoValor) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = nuevoValor;
    nuevoNodo->siguiente = *cabeza; // Apunta al nodo que antes era el primero
    *cabeza = nuevoNodo;          // Actualiza el puntero principal en el main
}