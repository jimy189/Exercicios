#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
  int horas,nivel,conta;
  		
  printf("Questao 12\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite quantas horas o professor trabalhou:");
  scanf("%d", &horas);
  
   printf("Digite quantas macas vc quer, nivel-1, nivel-2,nivel-3:");
  scanf("%d", &nivel);
  
	if(nivel=1){
	printf("O professor ganhou: %d R$\n", horas*12);
	}
	else
		
	if(nivel=2){
	printf("O professor ganhou: %d R$\n", horas*17);
	}
	else
	
 	if(nivel=3){
	printf("O professor ganhou: %d R$\n", horas*25);
	}
  	else
  	
  
  	
  system("pause");
  return (0); //valor de retorno da fun��o main
}
