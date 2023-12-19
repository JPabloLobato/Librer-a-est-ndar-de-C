#include <stdio.h>

int main() {
    // Intentar abrir el archivo en modo de lectura
    FILE *file = fopen("file.txt", "r");
    // Verificar si el archivo se abrió correctamente.
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;  // Salir del programa con un código de error
    }
    // Cerrar el archivo.
    fclose(file);
    return 0;
}
