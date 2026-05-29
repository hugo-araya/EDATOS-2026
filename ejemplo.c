#include <stdio.h>

// 1. Definir la estructura
struct Persona {
    char nombre[50];
    int edad;
};


void actualizarEdad(struct Persona *p) {

    p->edad += 1; 
}

int main() {

    struct Persona persona1 = {"Ana", 25};
    printf("Edad original: %d\n", persona1.edad);
    actualizarEdad(&persona1);
    printf("Edad actualizada: %d\n", persona1.edad);
    return 0;
}
