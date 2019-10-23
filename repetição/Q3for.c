#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int i,idade;
		

	
for(i=1;i<=75;i++)
{
	
	printf("\nDigite uma idade \n");
  scanf("%d", &idade);	
  
  	
if(idade>=18){
printf("Maior de Idade\n");	
}
else{
printf("Menor de Idade\n");	
}	
	
	
}


 

 }
