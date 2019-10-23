#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
int x;

printf("Digete um valor");
scanf("%d",&x);

if(x>0)
{
	printf("Positivo\n");
}
else

 if(x<0)
{
	printf("negativo\n");
}
else{
	printf("igual a 0\n");	
}


}
