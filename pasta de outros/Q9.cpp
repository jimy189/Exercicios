#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")
int main (void)
{
  int dentro;

  printf("Questão 9\n\n");
  // \n desloca cursor para a próxima linha
  
  printf("Digite um valor entre 100 e 200: ");
  scanf("%d", &dentro);
 
	if(dentro > 100 && dentro <200)
	 printf("Numero valido");
	 else if(dentro < 100)
            printf("invalido");
 
  
  system("pause");
  return (0); //valor de retorno da função main
}
