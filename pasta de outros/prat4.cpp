#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")
int main (void)
{
  int litro, km;
  int  resp_divisao;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a pr�xima linha
  
   printf("Digite o primeiro valor: ");
  scanf("%d", &litro);
  printf("Digite outro valor: ");
  scanf("%d", &km);
 
  
 
  
  resp_divisao = litro / km;
  printf("\nDivisao = %d\n", resp_divisao);
  system("pause");
  return (0); //valor de retorno da fun��o main
}
