#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    /* calcular el cubo de un numero. */
    int num, cubo;
    printf("Dime un numero: ");
    scanf("%i", &num);
    cubo = pow(num, 3);
    printf("el cubo de%i es %i\n", num, cubo);
    printf("fin...");
    return 0;
}
