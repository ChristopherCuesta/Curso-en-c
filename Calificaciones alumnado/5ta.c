#include <stdio.h>

/*Escribe un programa que pida al usuario su nota
y compruebe si ha suspendido (<5), si ha
sacado un suficiente (5), un bien (6), un notable
(7-8) o un sobresaliente (9-10). */

int main()
{
    int nota;

    printf("Introduce la nota del alumno\n");
    scanf("%d",&nota);

    if (nota <= 5){
        printf("Suspendido");
    }
    else if(nota == 6){
        printf("Bien");
    }
    else if(nota ==7 || nota == 8){
        printf("Notable");
    }
    else if(nota == 9 || nota == 10){
        printf("Sobresaliente");
    }
    else{
        printf("Nota introducida no valida");
    }
}
