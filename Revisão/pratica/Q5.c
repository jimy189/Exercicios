/*Questão 2 (Valor 2,0)
Escreva um algoritmo em Pseudocódigo que leia as idades de 2 homens e de 2 mulheres (considere que as
idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Diga se o homem mais
velho possui idade maior ou menor que 50 anos e se a idade da mulher mais nova é maior ou menor que 18
anos.*/

#include <stdio.h>

main(){
	
	int idadeh1,idadeh2,idadem1,idadem2,HV,HN,MV,MN,i=1;
	
	
	for(i!=0;i>=1;i++){
		
	printf("\nDigete a idade do primeiro Homem\n");
	scanf("%d",&idadeh1);
	printf("\nDigete a idade do segundo Homem\n");
	scanf("%d",&idadeh2);
	printf("\nDigete a idade da primeira Mulher\n");
	scanf("%d",&idadem1);
	printf("\nDigete a idade da segunda Mulher\n");
	scanf("%d",&idadem2);
	
	printf("\nDigete 0 para parar o programa\n");
	scanf("%d",&i);
	
	if(idadeh1!=idadeh2 && idadem1!=idadem2){
		
		idadeh1=idadeh1;
		idadeh2=idadeh2;
		idadem1=idadem1;
		idadem2=idadem2;
	}
	else{
	}
	
	if(idadeh1>idadeh2){
		HV=idadeh1;
		HN=idadeh2;
		
	}
	else{
		HV=idadeh2;
		HN=idadeh1;
	}
	
	
		if(idadem1>idadem2){
		MV=idadem1;
		MN=idadem2;
		
	}
	else{
		MV=idadem2;
		MN=idadem1;
	}
	
	
	
	if(i==0){
		break;
		
	}
	
	else{
		
	}
	
	
	}
	
	
	printf("\nPrograma Finalizado!\n");
	
	if(HV>=50){
	printf("\nO homem mais velho tem mais de 50 anos!\n");
	}
	else{
		printf("\nO homem mais velho tem menos de 50 anos!\n");
	}
	
	if(MV<18){
		printf("\nA Mulher tem menos de 18!\n");	
	}
	else{
		printf("\nA mulher  mais velha tem mais de 18 anos!\n");	
	}
	
	
	

	
	
}
