
#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
  int maca;
  float conta; 		
  printf("Questao 11\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite quantas macas vc quer:");
  scanf("%d", &maca);
  
	if(maca<=5)
	conta= maca * 0,70;
	 printf("O valor com desconto e: %f\n", conta -(conta* 0,05);
	 
	if(maca=10)
	printf("O valor com desconto e: %f\n", maca*0,70);
	 
 	if(maca>10)
	 printf("O valor com desconto e: %f\n", maca*0,70);
  
  system("pause");
  return (0); //valor de retorno da fun��o main
}
