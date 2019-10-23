
#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")

main ()
{
  int maca;
  float conta; 		
  printf("Questao 11\n\n");
  // \n desloca cursor para a próxima linha
  
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
  return (0); //valor de retorno da função main
}
