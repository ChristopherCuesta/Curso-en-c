#include <stdio.h>

/*En un hotel la informacion de las habitaciones se guarda en un array en el que cada posicion es a su vez otro array
con la informacion de una habitacion concreta. La primera posicion de cada array es el numero de habitacion
y las tres siguientes posiciones es el precio de la habitacion en temporada baja, media y alta.

Ejemplo: [[1,120,150,220],[2,130,160,230],[3,100,120,200]]

Escribe un programa en el que se defina una matriz como la anterior y muestre el promedio de cada una de las temporadas.*/

int main()
{
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumBaja = 0, sumMedia = 0, sumAlta = 0;

    for (int i=0; i<3; i++){

        for (int j=1; j<4; j++){

            if (j == 1){
                sumBaja += informacion[i][j];
            }
            if (j == 2){
                sumMedia += informacion[i][j];
            }
            if (j == 3){
                sumAlta += informacion[i][j];
            }
        }
    }

    float promBaja = sumBaja/3;
    float promMedia = sumMedia/3;
    float promAlta = sumAlta/3;

    printf("Promedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f",promBaja,promMedia,promAlta);
}
