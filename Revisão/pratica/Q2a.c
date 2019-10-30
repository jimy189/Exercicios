//2 – Elabore um algoritmo em pseudocódigo que leia dois valores digitados pelo usuário e mostre na tela a
//soma de todos os números existente no intervalo entre esses dois valores. Valor (2,0).

#include <stdio.h>

main(){
	
	int n1,n2,i,soma=0;
	
	printf("\nDigete o numero inicial\n");
	scanf("%d",&n1);
	
	printf("\nDigete o numero final\n");
	scanf("%d",&n2);
	
	for(i=n1;i<=n2;i++){
	soma=soma+i;	
	}
	
	printf("n\A soma dos numeros existentes e: %d\n", soma);
	
}
