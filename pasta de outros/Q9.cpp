#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")
int main (void)
{
  int dentro;

  printf("Quest�o 9\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite um valor entre 100 e 200: ");
  scanf("%d", &dentro);
 
	if(dentro > 100 && dentro <200)
	 printf("Numero valido");
	 else if(dentro < 100)
            printf("invalido");
 
  
  system("pause");
  return (0); //valor de retorno da fun��o main
}
