#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")
int main (void)
{
  int F, C;
  int  resp_convertor;
  
  

  printf("Digite um valor em celcius: ");
  scanf("%d", &C);
 
  
 
  
  resp_convertor = (9 * C+ 160) / 5;
  printf("\%4d\n", resp_convertor);
  system("pause");
  return (0); //valor de retorno da fun��o main
}
