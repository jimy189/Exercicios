#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
  int peso,excesso;
  		
  printf("Questao 5\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite quantos kilos de peixes:");
  scanf("%d", &peso);
  
  excesso= peso-50;
  
	if(peso>50){
	printf("A multa sera de: %d R$\n", excesso*4);
	}
	else{
		printf("\n n�o tera multa\n");
	}
		
  	
  system("pause");
  return (0); //valor de retorno da fun��o main
}
