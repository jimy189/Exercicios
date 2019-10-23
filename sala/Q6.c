#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int opcao;
float salario, conta;	
	
printf("\nDigite o valor do salario: \n");
  scanf("%f", &salario);	

printf("\nDigite  um numero para da categoria do funcionario, categoria 1-1, categoria 2-2, categoria 3-3, categoria 4-4\n");
  scanf("%d", &opcao);	
	
	switch (opcao)
  {
    case 1 :
printf ("salario antes: %f\n", salario);
 printf ("salario reajustado: %f\n", salario+(salario*0.05));
    break;
    
    case 2 :
    	printf ("salario antes: %f\n", salario);
   printf ("resultado: %f\n", salario+(salario*0.10));
    break;
    
    case 3 :
    	printf ("salario antes: %f\n", salario);
  printf ("resultado: %f\n", salario+(salario*0.15));
    break;
    
    case 4 :
    	printf ("salario antes: %f\n", salario);
  printf ("resultado: %f\n", salario+(salario*0.20));
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
