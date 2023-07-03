#include <stdio.h>

/*Escribe un programa que realice la conversión
euros a pesetas. Para ello, pedirá al usuario que
introduzca los euros a convertir y mostrará por
consola la equivalencia en pesetas de dicha
cantidad.*/

int main()
{
    float euros;

    printf("Introduce los euros que quieres convertir\n");
    scanf("%f",&euros);

    float pesetas = euros * 166.386;
    
    printf("%.2f euros equivalen a %.2f pesetas",euros,euros*166.386);

}
