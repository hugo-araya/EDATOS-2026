#include <stdio.h>
#include "listas.h"

int main () {
    LISTA *L;
    L = NULL;
    limpiarPantalla();
    //llena(&L);
    agregaFinal(&L, 10);
    muestra(L);
    printf("La cantidad de nodos es: %d\n", cuentaNodos(L));
    agregaFinal(&L, 20);
    muestra(L);
    printf("La cantidad de nodos es: %d\n", cuentaNodos(L));
    agregaInicio(&L, 30);
    muestra(L);
    printf("La cantidad de nodos es: %d\n", cuentaNodos(L));
    agregaFinal(&L, 50);
    muestra(L);
    printf("La cantidad de nodos es: %d\n", cuentaNodos(L));
    return 0;
}

