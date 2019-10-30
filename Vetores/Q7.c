/*Elabore um algoritimo que leia um vetor de 6 posições e mostre a soma, a média
e a quantidade de números menores que 10..*/

#include<stdio.h>

 main()
{
	int i,menor=0;
  float soma=0,n[6];
  // declarando e inicializando o vetor notas
  
  printf("Questão 7 \n\n");
  
  for( i = 0 ; i <=5; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%f", &n[i]); 
	 
 	soma=soma +n[i];
 	
 	
 		if(n[i]<10){	
  				
  			  menor=menor +1;	
		
		  		}
	  		
		else{
				menor=menor;			
			
			}
}

	printf("\nA SOMA: %f\n", soma);
	printf("\nA Media das posicoes e: %f\n", soma/6);
	printf("\nA quantidade de numeros menores que 10 e: %d\n", menor);

}
