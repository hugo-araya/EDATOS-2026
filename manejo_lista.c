#include <stdio.h>
#include "listas.h"

void menu();

int main () {
    int opcion;
    char seguir[5];
    LISTA *L;
    limpiarPantalla();
    menu();
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);
    while (opcion != 0){
        switch (opcion){
            case 1: L = creaLista();
                    break;
            case 2: if (L == NULL){
                        printf("\n***** La lista esta vacia\n");
                    }
                    else{          
                        muestra(L);
                    }
                    break;     
            case 3: printf("Cantidad de nodos es: %d\n", cuentaNodos(L));
                    break;  
            case 4: agregaInicio(&L, 30);
                    break;  
            case 5: agregaFinal(&L, 20);
                    break;  
            case 6: printf("Estoy en la opcion 6\n");
                    break;  
            case 7: printf("Estoy en la opcion 7\n");
                    break; 
            case 8: printf("Estoy en la opcion 8\n");
                    break;
            case 9: listaVacia(L);
                    break;
            case 0: printf("SALIR\n");
        }
        //printf("Presiona enter para continuar");
        //fgets(seguir, sizeof(seguir), stdin);
        //limpiarPantalla();
        menu();
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
    }
    return 0;
}

void menu(){
    printf("\n\t\tManejo de listas\n\n");
    printf("\t1. Crear lista\n");
    printf("\t2. Mostrar lista en pantalla\n");
    printf("\t3. Cantidad de elementos de la lista\n");
    printf("\t4. Agregar un elemento al Comienzo de la lista\n");
    printf("\t5. Agregar un elemento al final de la lista\n");
    printf("\t6. Agregar despues de una determina posicion\n");
    printf("\t7. Eliminar al inicio de la lista\n");
    printf("\t8. Eliminar al final de la lista\n");
    printf("\t9. Indicar si la lista esta vacia\n");   
    printf("\t0. SALIR\n");
}