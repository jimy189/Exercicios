/*1 - Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a
altura e o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o
seguinte:
a) a maior altura da turma
b) a média da altura dos homens
c) a média da altura da turma.*/

#include <stdio.h>
main(){
	
	int i,sexo,H=0,M=0;
	float altura,maioraltura=0,Hm=0,Hh=0;
	
	for(i=1;i<=50;i++){
		
		printf("\nDigete o sexo da pessoa, 1-masculino, 2-feminino\n");
		scanf("%d",&sexo);
		
		switch(sexo){
		
		case 1:
		printf("\nDigete a altura do Homem\n");
		scanf("%f",&altura);
		if(altura>maioraltura){
			maioraltura=altura;
		}
		else{
			maioraltura=maioraltura;
		}
		H=H+ 1;
		Hh=Hh +altura;
		break;
		
		case 2:
		printf("\nDigete a altura da Mulher\n");
		scanf("%f",&altura);
		if(altura>maioraltura){
			maioraltura=altura;
		}
		else{
			maioraltura=maioraltura;
		}
		M=M+ 1;
		Hm=Hm +altura;
		break;
		
		default:
			printf("Opcao Invalida");
			break;
		
		}
		
		
	}
	
		printf("\nMaior Altura e: %f\n", maioraltura);
		printf("\nMedia dos Homens e: %f\n", Hh/H);
		printf("\nMedia da Turma e: %f\n", (Hh+Hm)/(H+M));
	
}
