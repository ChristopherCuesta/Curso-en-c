#include <stdio.h>

/*Cargar por teclado y almacenar en un vector el peso de 5 personas.
Obtener el promedio de los mismos. Contar cuantas personas pesan mas que el promedio
y cuantas pesan menos.*/

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i=0;i<5;i++){

        printf("Introduce un peso para almacenarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int Mayor = 0;
    int Menor = 0;

    for (int i=0;i<5;i++){

        if (pesos[i] >= promedio){
            Mayor ++;
        }
        else{
            Menor++;
        }
    }

    printf("El promedio de pesos es: %.2f\n",promedio);
    printf("Numero pesos mayores o iguales que el promedio son : %d, Numero pesos menores que el promedio son :  %d", Mayor, Menor);

}
