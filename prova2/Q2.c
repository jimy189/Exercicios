//2 – Elabore um algoritmo em pseudocódigo que leia dois valores digitados pelo usuário e mostre na tela a
//soma de todos os números existente no intervalo entre esses dois valores. Valor (2,0).


#include <stdio.h>

main (){
int i, inicial,final,soma=0;

printf("\nDigete o numero inicial\n");
scanf("%d", &inicial);

printf("\nDigete o numero final\n");
scanf("%d", &final);




	for(i=inicial;i<=final;i++)	{
	
		soma=soma+i;
		}
printf("\nSoma dos numeros existentes e: %d\n",soma);


}						

	






