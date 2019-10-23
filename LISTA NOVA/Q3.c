#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
int x,y,conta;

printf("Digete um valor inteiro\n");
scanf("%d",&x);
printf("Digete o segundo inteiro\n");
scanf("%d",&y);

conta= x+y;

if(conta%2==0)
{
	printf("Ele e par\n");
}
else
{
	printf("Ele e impar\n");
}


}
