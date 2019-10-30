/*- Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir. Para
cada número lido, mostre uma tabela contendo o valor lido e o seu cubo.*/

#include <stdio.h>

main(){
	
	int i=1,n1,cubo;
	
	while(i!=0){
		
	printf("Digite um numero de 1 a 10");
	scanf("%d", &n1);	
		
	cubo=n1*n1*n1;
	
	printf("numero lido, %d",n1);
	printf("Seu cubo, %d",cubo);
	
	printf("Digite 0 para parar");
	scanf("%d", &i);
	}
	
	
	
}
