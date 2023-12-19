#include <stdio.h>

int main() {
    // Escribir en el archivo.
    FILE *archivo_escritura = fopen("file.txt", "w");
    if (archivo_escritura == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(archivo_escritura, "Hola, mundo!\n");

    // Cerrar el archivo.
    fclose(archivo_escritura);

    // Leer archivo.
    FILE *archivo_lectura = fopen("file.txt", "r");
    if (archivo_lectura == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    // Utilizar fscanf() para leer una línea.
    char buffer[50];
    if (fscanf(archivo_lectura, "%49[^\n]", buffer) == 1) {
        // Imprimir lo leído del archivo
        printf("Leído del archivo: %s\n", buffer);
    } else {
        printf("No se pudo leer correctamente del archivo.\n");
    }

    // Cerrar.
    fclose(archivo_lectura);

    return 0;
}
