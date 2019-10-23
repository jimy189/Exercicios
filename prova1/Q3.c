//Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a categoria de cada
//empregado. O aumento seguirá a seguinte regra:
//a) Funcionários da categoria A ganharão R$100,00 de aumento sobre o salário
//b) Funcionários da categoria B ganharão R$150,00 de aumento sobre o salário
//c) Funcionários da categoria K ganharão R$200,00 de aumento sobre o salário
//d) Funcionários da categoria L ganharão R$250,00 de aumento sobre o salário
//Faça um algoritmo em Pseudocódigo que leia o salário inicial e de acordo com a categoria do funcionário
//escolhida no menu, apresente o salário inicial e o salário reajustado de cada Empregado.



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
