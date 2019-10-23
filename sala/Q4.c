#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int presta;
float base,altura, conta;	
	
printf("\nDigite a base: \n");
  scanf("%f", &base);	

printf("\nDigite a altura: \n");
  scanf("%f", &altura);	

printf("\nDigite  um numero para prestacoes, Quadrado-1, Triangulo-2, Retangulo-3, Cubo-4\n");
  scanf("%d", &presta);	
	
	switch (presta)
  {
    case 1 :
    conta= base*altura;
    printf ("resultado: %f\n", base*altura);
    break;
    
    case 2 :
    conta= (base*altura)/2;
    printf ("valor da compra: %f\n", conta);
    break;
    
    case 3 :
    conta= base*altura;
 printf ("valor da compra: %f\n", conta);
    break;
    
    case 4 :
    conta= base*altura*base;
    printf ("valor da compra: %f\n", conta);
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
