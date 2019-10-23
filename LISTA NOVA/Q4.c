#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
int x,y,mult1,mult2;

printf("Digete um valor inteiro\n");
scanf("%d",&x);
printf("Digete o segundo inteiro\n");
scanf("%d",&y);

mult1= x*4;
mult2= y*3;

printf("Primeiro valor e: %d\n",mult1);
printf("Segundo valor e: %d\n",mult2);
}
