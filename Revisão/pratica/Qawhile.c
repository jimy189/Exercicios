//2 � Elabore um algoritmo em pseudoc�digo que leia dois valores digitados pelo usu�rio e mostre na tela a
//soma de todos os n�meros existente no intervalo entre esses dois valores. Valor (2,0).

#include <stdio.h>

main(){
	
	int n1,n2,i,soma=0;
	
	
	printf("\nDigete o numero inicial\n");
	scanf("%d",&n1);
	
	printf("\nDigete o numero final\n");
	scanf("%d",&n2);
	
	i=n1;
	
	while(i<=n2){
	soma=soma+i;
	i++;	
	}
	
	printf("\nA soma dos numeros existentes e: %d\n", soma);
	
}
