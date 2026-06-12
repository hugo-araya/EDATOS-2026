#include <stdio.h>
#include <string.h>
#include "pilas_char.h"
#include "colas_char.h"
#include "tools.h"

// Descripción: Leer una cadena de texto introducida por el usuario, 
// insertar cada carácter en una Pila y luego extraerlos todos para 
// imprimir la cadena invertida.

int main(){
    PILA *pila;
    COLA *cola;
    char texto[50], elemP, elemC;
    int largo, no_palindromo = 0;
    crearPila(&pila);
    crearCola(&cola);
    limpiarPantalla();
    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    largo = strlen(texto)-1;

    for(int i = 0; i < largo; i++){
        encolar(&cola, texto[i]);
        push(pila, texto[i]);
    }
    
    printf("Revision de palindromo\n");

    while (!vaciaPila(pila)){
        pop(pila, &elemP);
        desencolar(&cola, &elemC);
        if (elemP != elemC){
            no_palindromo = 1;
        }
    }
    if (no_palindromo == 0){
        printf("----> Es palindromo\n");
    }
    else{
        printf("----> No es Palindromo\n");
    }
    return 0;
}
