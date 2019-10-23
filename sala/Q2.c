#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int op;
float v1, v2,conta;	
	
printf("\nDigite o primeiro valor: \n");
  scanf("%f", &v1);	

printf("\nDigite o segundo valor: \n");
  scanf("%f", &v2);

printf("\nDigite  um numero para o curso, soma-1, subtracao-2, multiplicacao-3, divisao-4\n");
  scanf("%d", &op);	
	
	switch (op)
  {
    case 1 :
    conta= v1+v2;
    printf ("resultado: %f\n", conta);
    break;
    
    case 2 :
    conta= v1-v2;
    printf ("resultado: %f\n",conta);
    break;
    
    case 3 :
    conta= v1*v2;
    printf ("resultado: %f\n",conta);
    break;
    
    case 4 :
    conta= v1/v2;
    printf ("Nota de sistema e: %f\n",conta);
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
