#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")


main()
{
int i;
		
float n1,n2,media;
	
for(i=1;i<=10;i++)
{
	
	printf("\nDigite  a primeira nota \n");
  scanf("%f", &n1);	
  
  	
	printf("\nDigite a segunda nota\n");
  scanf("%f", &n2);	

	media= (n1+n2)/2;		
	
	
printf("Valor  e: %f\n", media);	
	
}


 

 }
