//Uma empresa ir� dar um aumento de sal�rio aos seus funcion�rios de acordo com a categoria de cada
//empregado. O aumento seguir� a seguinte regra:
//a) Funcion�rios da categoria A ganhar�o R$100,00 de aumento sobre o sal�rio
//b) Funcion�rios da categoria B ganhar�o R$150,00 de aumento sobre o sal�rio
//c) Funcion�rios da categoria K ganhar�o R$200,00 de aumento sobre o sal�rio
//d) Funcion�rios da categoria L ganhar�o R$250,00 de aumento sobre o sal�rio
//Fa�a um algoritmo em Pseudoc�digo que leia o sal�rio inicial e de acordo com a categoria do funcion�rio
//escolhida no menu, apresente o sal�rio inicial e o sal�rio reajustado de cada Empregado.



#include <stdio.h>

main(){
int op;
float inicial;
printf("\nO SALARIO INICIAL\n");
scanf("%f", &inicial);	

printf("\nDigete a categoria, 1- A ganha 100, 2-Categoria B Ganha 150, 3-Categoria K ganha 200, 4-Categoria L ganha 250\n");
scanf("%d", &op);		
	
switch(op){
case 1:
	printf ("O aumento foi: R$%f\n", inicial+100);
break;	

case 2:
	printf ("O aumento foi: R$%f\n", inicial+150);
break;	

case 3:
	printf ("O aumento foi: R$%f\n", inicial+200);
break;	

case 4:
	printf ("O aumento foi: R$%f\n", inicial+250);
break;	

default :
    printf ("Valor invalido!\n");
  }

	
	
}
