#include <stdio.h>
#include <string.h>
#include "pilas_char.h"
#include "tools.h"

// Descripción: Leer una cadena de texto introducida por el usuario, 
// insertar cada carácter en una Pila y luego extraerlos todos para 
// imprimir la cadena invertida.

int main(){
    PILA *pila;
    char texto[50], elem;
    int largo;
    crearPila(&pila);
    limpiarPantalla();
    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    largo = strlen(texto)-1;
    for(int i = 0; i < largo; i++){
        push(pila, texto[i]);
    }
    
    printf("Texto invertido: ");
    while (!vaciaPila(pila)){
        pop(pila, &elem);
        printf("%c", elem);
    }
    printf("\n");
    return 0;
}
