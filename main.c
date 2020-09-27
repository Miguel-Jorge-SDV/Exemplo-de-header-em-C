#include <stdio.h>
#include <stdlib.h>
#include "calculos.c"

int main () {

    printf("\nDigite um número: \n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("\nQuadrado de %d eh %d .\n", y, quad);
    printf("\nCubo de %d eh %d .\n", y, cub);
    printf("\nO PI eh %f .\n\n", PI);

    return 0;
}