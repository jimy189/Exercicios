#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")
int main (void)
{
  int valor1, valor2;
  int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
  
 
  
  resp_soma = 1 + 2;
  printf("\nSoma = %d", resp_soma);
  
  resp_subtracao = 1 + 22;
  printf("\nSubtracao = %d", resp_subtracao);
  
  resp_multiplicacao = 8 * 10;
  printf("\nMultiplicacao = %d", resp_multiplicacao);
  
  resp_divisao = 30 / 2;
  printf("\nDivisao = %d\n", resp_divisao);
  system("pause");
  return (0); //valor de retorno da função main
}
