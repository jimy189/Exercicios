#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int opcao;
float quantidade;

printf("\nDigite  um numero para da categoria do funcionario, codigo 1001-1,\ncodigo 1324-2, codigo 6548-3, codigo 0987-4, codigo 7623-5 \n");
  scanf("%d", &opcao);	
	
	
printf("\nDigite a quantidade do produto: \n");
  scanf("%f", &quantidade);	
	
	
	switch (opcao)
  {
    case 1 :

 printf ("Valor da Compra e: %f\n", quantidade*5.32);
    break;
    
    case 2 :
    printf ("Valor da Compra e: %f\n", quantidade*6.45);
    break;
    
    case 3 :
    printf ("Valor da Compra e: %f\n", quantidade*2.37);
    break;
    
    case 4 :
  printf ("Valor da Compra e: %f\n", quantidade*5.32);
    break;
    
    case 5 :
  printf ("Valor da Compra e: %f\n", quantidade*6.45);
    break;
    
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
