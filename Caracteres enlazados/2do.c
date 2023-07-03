#include <stdio.h>

/*Escribe un programa que pida al usuario 3
caracteres y los muestre por consola separados
por guiones.*/

int main()
{
    char a,b,c;
   
    printf("Introduce 3 caracteres\n");
    scanf("%c %c %c",&a,&b,&c);
 
    printf("%c-%c-%c",a,b,c);

}
