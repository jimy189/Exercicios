/*3 - - Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário se ele quer continuar ou parar. Quando o usuário digitar 0 o
algoritmo para.*/

#include <stdio.h>

main(){
	int idade,i=1,intervalo=0,maioridade=0;
	
	while(i!=0){
		
	printf("\nDigete a idade dos Habitantes\n");
	scanf("%d", &idade);
	printf("\nDigete 0 para para o programa ou qulquer numero para continuar\n");
	scanf("%d", &i);
	
	if(idade>maioridade){
		maioridade=idade;
	}	
	else{
		maioridade=maioridade;
	}
	
	if(idade>=18 && idade<=35)
	
	intervalo=intervalo +1;
		
	}
		
	printf("\A maior idade e: %d\n",maioridade);
	printf("\Pessoas entre 18 a 35 sao: %d\n", intervalo);
}
