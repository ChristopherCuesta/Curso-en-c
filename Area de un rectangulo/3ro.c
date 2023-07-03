#include <stdio.h>

/*Escribe un programa que pida al usuario el valor
de la base y la altura de un rectángulo y con
ellos calcule su área. A = b x h*/

int main()
{
    float base,altura;

    printf("Introduzca la base del rectangulo\n");

    scanf("%f",&base);
    printf("Introduzca la altura del rectangulo\n");

    scanf("%f",&altura);

    float area = base * altura;

    printf("\nEl area del rectangulo es: %.2f",area);
}
