#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")
int main (void)
{
  int capital, taxa,tempo;
  int resp_montante;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a pr�xima linha
  
  printf("Digite o valor da capital: ");
  scanf("%f", &capital);
 
  
  resp_montante = capital *  0,70 * 30;
  printf("\nResultado = %f", resp_montante);
  
  system("pause");
  return (0); //valor de retorno da fun��o main
}
