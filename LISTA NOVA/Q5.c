#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
int x;

printf("Digete um valor inteiro\n");
scanf("%d",&x);



if(x<0)
{
	printf("Ele e neogativo\n");
}
else
if(x>0)
{
	printf("Ele e positvo\n");
}


}
