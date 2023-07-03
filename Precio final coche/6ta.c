#include <stdio.h>

/* Escribir un programa que se utilice para calcular el precio final de venta de coches de segunda mano
de un concesionario. Para ello, el programa debe pedir al usuario que introduzca el precio base del
vehículo, el número de kilómetros y su consumo.
Si los kilómetros son inferiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 20%.
Si los kilómetros son superiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 10%.
Si el consumo es superior a 5, incrementar el precio base un 5%.*/

int main()
{
    int precio,km;
    float consumo,precioFinal;

    printf("Introduce el precio base del vehiculo\n");
    scanf("%d",&precio);

    printf("Introduce los kilometros\n");
    scanf("%d",&km);
    printf("Introduce el consumo\n");
    scanf("%f",&consumo);

    if (km<20000 && consumo<=5){
        precioFinal = precio * 1.2;
    }
    else if(km>20000 && consumo<=5){
        precioFinal = precio * 1.1;
    }
    else if(consumo>5){
        precioFinal = precio *1.05;
    }

    printf("El precio final del vehiculo es: %.2f",precioFinal);
}
