/*2 - Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados:
sexo (0feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas
e mostre as seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;*/
#include <stdio.h>

main(){
	
		int i,sexo,H=0,M=0,idade,idadeh=0,idadem=0;
	float altura,Hm=0,Hh=0;
	
	for(i=1;i<=1000;i++){
		
		printf("\nDigete o sexo da pessoa, 1-masculino, 2-feminino\n");
		scanf("%d",&sexo);
		
		switch(sexo){
		
		case 1:
		printf("\nDigete a altura do Homem\n");
		scanf("%f",&altura);
		printf("\nDigete a idade do Homem\n");
		scanf("%d",&idade);
		
		H=H+ 1;
		Hh=Hh +altura;
		idadeh=idadeh+idade;
		
		break;
		
		case 2:
		printf("\nDigete a altura da Mulher\n");
		scanf("%f",&altura);
			printf("\nDigete a idade da mulher\n");
		scanf("%d",&idade);
		M=M+ 1;
		Hm=Hm +altura;
		idadem=idadem +idade;
		break;
		
		default:
			printf("Opcao Invalida");
			break;
		
		}
		
		
	}
	
		printf("\nMedia de idade do grupo e: %d\n", (idadeh+idadem)/(H+M));
		printf("\nMedia das mulheres e: %f\n", Hm/M);
		printf("\nMedia de idade dos homens e: %d\n", idadeh/H);
	
	
	
	
	
	
}
