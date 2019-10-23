#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int opcao,v;


printf("\nDigite  um numero inteiro \n");
  scanf("%d", &v);	

printf("\nDigite  um numero para da categoria do funcionario, dobro-1,n\ncodigo triplo-2, cubo-3, codigo antecessor-4, sucessor-5 \n");
  scanf("%d", &opcao);	
	
	

	
	
	switch (opcao)
  {
    case 1 :

 printf ("Valor  e: %d\n", v*v);
    break;
    
    case 2 :
    printf ("Valor e: %d\n", v*3);
    break;
    
    case 3 :
    printf ("Valor e: %d\n", v*v*v);
    break;
    
    case 4 :
  printf ("Valor  e: %d\n", v-1);
    break;
    
    case 5 :
  printf ("Valor e: %d\n", v+1);
    break;
    
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
