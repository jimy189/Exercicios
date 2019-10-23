/*
1 - Escrever um algoritmo que leia um conjunto de 50 informa��es contendo, cada uma delas, a
altura e o sexo de uma pessoa (c�digo=1, masculino c�digo=2, feminino), calcule e mostre o
seguinte:
a) a maior altura da turma
b) a m�dia da altura dos homens
c) a m�dia da altura da turma.
*/

#include <stdio.h>

#define NUMERO_DE_ALUNOS 3
#define MASCULINO 1
#define FEMININO 2

int main() {
	
	//Define vari�veis que ser�o utilizadas para o c�lculo final
	float maiorAltura = 0;
	float mediaHomens = 0;
	float mediaTotal = 0;
	int quantidadeHomens = 0;
	int quantidadeTotal = 0;
	
	//Define vari�veis que ser�o usadas dentro do LOOP (para leitura de cada pessoa)
	char sexo;
	float altura;
	
	int count = 1;
	
	while (count <= NUMERO_DE_ALUNOS){
		
		//L� um registro contendo SEXO e ALTURA
		printf("Insira o sexo da pessoa %d: ", count);
		scanf("%d",&sexo);
		printf("Insira a altura da pessoa %d: ", count);
		scanf("%d",&altura);
		
		if (sexo == MASCULINO){
			quantidadeHomens++;
			quantidadeTotal++;
			mediaHomens = mediaHomens + altura;
			mediaTotal = mediaTotal + altura;
			if (altura > maiorAltura){
				maiorAltura = altura;
			}
		}else if (sexo == FEMININO){
			quantidadeTotal++;
			mediaTotal = mediaTotal + altura;
			if (altura > maiorAltura){
				maiorAltura = altura;
			}
		}else {
			printf("Selecione um sexo valido! (1 ou 2)\n\r");
		}
		
		count++;
	}
	
	//Resolvemos a m�dia aritimetica e mostramos os resultados no CONSOLE
	printf("\n\r\n\r**** RESULTADOS **** \n\r\n\r");
	
	printf("Maior altura da turma: %i \n\r", maiorAltura);
	printf("Media da altura dos homens: %i \n\r", (mediaHomens / quantidadeHomens));
	printf("Media da altura da turma: %i \n\r ", (mediaTotal / quantidadeTotal));
	
	return 0;
	
}

