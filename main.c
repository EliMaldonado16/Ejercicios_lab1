#include <stdio.h>
#include <stdlib.h>
/*
    Objetivo:
    Realizar un programa que solicite cinco numeros e imprima por pantalla el
    promedio, maximo y minimo
*/
int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;


    printf("Ingrese un numero:\n");
    scanf("%d", &auxiliarInt);

    maximo=auxiliarInt;
    minimo=auxiliarInt;
    acumulador= auxiliarInt;


    for(i=0;i<4;i++)
    {
        printf("Ingrese otro numero:\n");
        scanf("%d",&auxiliarInt);

        acumulador = acumulador+auxiliarInt;

        if(auxiliarInt>maximo)
        {
            maximo=auxiliarInt;
        }
        if(auxiliarInt<minimo)
        {
            minimo= auxiliarInt;
        }
    }

    printf("El maximo es: %d\n",maximo);
    printf("El minimo es: %d\n", minimo);
    printf("El promedio es %d\n",acumulador/5);

    return 0;
}
