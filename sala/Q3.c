#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int presta;
float v1, conta;	
	
printf("\nDigite o valor da compra: \n");
  scanf("%f", &v1);	


printf("\nDigite  um numero para prestacoes, 5 vezes-1, 10 vezes-2, 12 vezes-3, 24 vezes-4\n");
  scanf("%d", &presta);	
	
	switch (presta)
  {
    case 1 :
    conta= v1/5;
    printf ("valor da compra: %f\n", v1);
    printf ("prestacoes: %f\n", conta);
    break;
    
    case 2 :
    conta= v1/10;
    printf ("valor da compra: %f\n", v1);
    printf ("prestacoes: %f\n",conta);
    break;
    
    case 3 :
    conta= v1/12;
 printf ("valor da compra: %f\n", v1);
    printf ("prestacoes: %f\n",conta);
    break;
    
    case 4 :
    conta= v1/24;
    printf ("valor da compra: %f\n", v1);
    printf ("prestacoes: %f\n",conta);
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
