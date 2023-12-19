#include <string.h>
#include <stdio.h>

int main() {
    // Cadena de ejemplo.
    char str[] = "Hola mundo";

    // Calcular la longitud de la cadena usando strlen().
    int longitud = strlen(str);

    // Imprimir la longitud.
    printf("La longitud de '%s' es: %d\n", str, longitud);

    return 0;
}

