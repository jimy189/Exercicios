#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
  int dentro;

  printf("Questao 10\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite um valor:");
  scanf("%d", &dentro);
 
	if(dentro>80)
	 printf("Numero valido\n");
	 
	if(dentro<25)
	 printf("Numero valido 2\n");
	 
 	if(dentro=100)
	 printf("Numero valido 3\n");
  
  system("pause");
  return (0); //valor de retorno da fun��o main
}
