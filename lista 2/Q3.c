
#include <stdio.h> //biblioteca padrão para comandos i/o

main ()
{
  int x, y,soma,quad;
  		
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  
    printf("Digite o segundo valor: ");
  scanf("%d", &y);
  
  
  soma= x+y;
  quad=soma*soma;

  
  printf("O valor da soma do quadrado e: %d\n", quad);
 
}
