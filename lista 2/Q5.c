#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
  int peso,excesso;
  		
  printf("Questao 5\n\n");
  // \n desloca cursor para a próxima linha
  
  printf("Digite quantos kilos de peixes:");
  scanf("%d", &peso);
  
  excesso= peso-50;
  
	if(peso>50){
	printf("A multa sera de: %d R$\n", excesso*4);
	}
	else{
		printf("\n não tera multa\n");
	}
		
  	
  system("pause");
  return (0); //valor de retorno da função main
}
