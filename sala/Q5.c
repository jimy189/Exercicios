#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int opcao;
float carro, conta;	
	
printf("\nDigite o valor do carro: \n");
  scanf("%f", &carro);	

printf("\nDigite  um numero para prestacoes, alcool-1, diesel-2, gasolina-3, eletrico-4\n");
  scanf("%d", &opcao);	
	
	switch (opcao)
  {
    case 1 :
 printf ("resultado: %f\n", carro-(carro*0.25));
    break;
    
    case 2 :
   printf ("resultado: %f\n", carro-(carro*0.21));
    break;
    
    case 3 :
  printf ("resultado: %f\n", carro-(carro*0.14));
    break;
    
    case 4 :
  printf ("resultado: %f\n", carro-(carro*0.25));
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
