#include <stdio.h>
#include <math.h>

int main()
{
    struct cilindro{
        float diametro;
        float carrera;
    };

    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };

    struct motor Motor;

    printf("Introduce el identificador\n");
    scanf("%d",&Motor.identificador);
    printf("Introduce el diametro del cilindro(mm)\n");
    scanf("%f",&Motor.cilindro1.diametro);
    printf("Introduce la carrera del cilindro(mm)\n");
    scanf("%f",&Motor.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&Motor.num_cilindros);

    Motor.cilindrada = (Motor.num_cilindros*(Motor.cilindro1.carrera/10)* M_PI *pow((Motor.cilindro1.diametro/10),2))/4;

    printf("Identificador: %d\n",Motor.identificador);
    printf("Diametro(mm): %.2f\n", Motor.cilindro1.diametro);
    printf("Carrera(mm): %.2f\n",Motor.cilindro1.carrera);
    printf("No cilindros: %d\n",Motor.num_cilindros);
    printf("Cilindrada: %.2f\n",Motor.cilindrada);


}
