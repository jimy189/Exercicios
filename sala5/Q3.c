/*- Escrever um algoritmo que l� 10 valores, um de cada vez, e conta quantos deles est�o no intervalo [10 e 20]
e quantos deles est�o fora do intervalo, escrevendo estas informa��es.*/
#include <stdio.h> //biblioteca padr�o para comandos i/o



main()
{
int n1,i,intervalo=0,fora=0;
		

	
for(i=1;i<=10;i++)
{
	
	printf("\nDigite um numero \n");
  scanf("%d", &n1);	 	
	
if(n1>10 && n1<=20)
{
	intervalo=intervalo +1;

}
else{
		fora=fora +1;
}
	
	
}
	printf("\nintervalo:%d \n", intervalo);	
	printf("\nFora:%d \n", fora);
}
