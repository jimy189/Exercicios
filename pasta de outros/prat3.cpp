#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")
int main (void)
{
  int valor1, valor2;
  int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a pr�xima linha
  
 
  
  resp_soma = 1 + 2;
  printf("\nSoma = %d", resp_soma);
  
  resp_subtracao = 1 + 22;
  printf("\nSubtracao = %d", resp_subtracao);
  
  resp_multiplicacao = 8 * 10;
  printf("\nMultiplicacao = %d", resp_multiplicacao);
  
  resp_divisao = 30 / 2;
  printf("\nDivisao = %d\n", resp_divisao);
  system("pause");
  return (0); //valor de retorno da fun��o main
}
