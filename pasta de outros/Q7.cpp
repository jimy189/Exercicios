#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")
int main (void)
{
  int capital, taxa,tempo;
  int resp_montante;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
  
  printf("Digite o valor da capital: ");
  scanf("%f", &capital);
 
  
  resp_montante = capital *  0,70 * 30;
  printf("\nResultado = %f", resp_montante);
  
  system("pause");
  return (0); //valor de retorno da função main
}
