#include<stdio.h>//biblioteca necessaria para entrada e saida
#include<stdlib.h>// para deixa o programa ser visto
int main (void)
{
  int valor1, valor2;
  int resp_soma, 
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite outro valor: ");
  scanf("%d", &valor2);
  
  resp_soma = valor1 + valor2;
  printf("\nSoma = %d", resp_soma);
  
 
  system("pause");
  return (0); //valor de retorno da função main
}
