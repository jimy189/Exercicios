#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")
int main (void)
{
  int a, b;
  int  troca;
  
  printf("Testando operadores aritmeticos\n\n");
  // \n desloca cursor para a próxima linha
  
   printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite outro valor: ");
  scanf("%d", &b);
 
 troca = a;
 a = b;
 b = troca;
  
 
  printf("%4d%4d\n", a, b);
  system("pause");
  return (0); //valor de retorno da função main
}
