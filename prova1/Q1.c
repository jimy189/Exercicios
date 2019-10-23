//Elabore um algoritmo em Diagrama de blocos que receba dois valores inteiros (A,B) e mostre a soma dos
//valores caso sejam iguais, multiplica��o dos n�meros caso o valor de A seja maior que B e a subtra��o caso
//B seja maior que A.

#include <stdio.h>

main(){
int a,b,soma,mult,sub;	
	
printf("\nDigete um numero inteiro A\n");
scanf("%d",&a);

printf("\nDigete um numero inteiro B\n");
scanf("%d",&b);
//atribuir um valor!
if(a==b){
	soma=a+b;
	printf("Soma: %d",soma);
}
else 

if(a>b){
	mult=a*b;
	printf("Mult: %d", mult);
	
}
else{
	sub=a-b;
	printf("Sub: %d", sub);
}
}

