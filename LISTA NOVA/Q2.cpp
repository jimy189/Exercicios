#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
int x,y;

printf("Digete um valor inteiro\n");
scanf("%d",&x);
printf("Digete o segundo inteiro\n");
scanf("%d",&y);

if(x<y)
{
	printf("X e menor\n");
}
else
 if(x>y)
{
	printf("Y e menor\n");
}
else{
	printf("igual\n");	
}


}
