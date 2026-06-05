#include <stdio.h>
#include "listas.h"

void menu();

int main () {
    int opcion;
    char seguir[5];
    limpiarPantalla();
    menu();
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    while (opcion != 9){
        switch (opcion){
            case 1: printf("Estoy en la opcion 1\n");
                    break;
            case 2: printf("Estoy en la opcion 2\n");
                    break;      
        }
        printf("Presiona enter para continuar");
        fgets(seguir, sizeof(seguir), stdin);
        limpiarPantalla();
        menu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
    }
    return 0;
}

void menu(){
    printf("\t\tManejo de listas\n\n");
    printf("1. Crear lista\n");
    printf("2. Mostrar lista\n");
    printf("9. SALIR\n");
}