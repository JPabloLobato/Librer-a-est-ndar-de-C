#include <stdlib.h>
#include <stdio.h>

int main () {
    //Declaro números de ambos signos.
    int numero[5] = {-1, 2, -3, 4, -5};
    int num_elementos = sizeof(numero) / sizeof(numero[0]);
    //Con el array, muestro el valor absoluto de cada elemento.
    for (int i = 0; i < num_elementos; i++) {
        int num = numero[i];
        int abs_num = abs(num);
        printf("El valor del elemento %d es %d \n", i, abs_num);
    }
    return 0;
}