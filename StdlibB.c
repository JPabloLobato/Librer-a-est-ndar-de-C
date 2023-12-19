#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    //Semilla para la generación de números aleatorios.
    srand((unsigned int)time(0));
    //Generar un número aleatorio.
    int random_number = rand();
    printf("Número aleatorio sin cambio de semilla: %d\n", random_number);
    // Cambiar la semilla.
    unsigned int nueva_semilla = 123;
    srand(nueva_semilla);
    //Número aleatorio después de cambiar la semilla.
    int nuevo_random_number = rand();
    printf("Número aleatorio con cambio de semilla: %d\n", nuevo_random_number);

    return 0;
}

