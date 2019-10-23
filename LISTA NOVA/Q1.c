#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
int x,y;

printf("Digete um valor inteiro\n");
scanf("%d",&x);
printf("Digete o segundo inteiro\n");
scanf("%d",&y);

if(x>y)
{
	printf("X e maior\n");
}
else
 if(x<y)
{
	printf("Y e maior\n");
}
else{
	printf("igual\n");	
}


}
