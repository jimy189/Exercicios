#include<stdio.h>

 main()
{
  int i, notas[10],quantidade=0;
  // declarando e inicializando o vetor notas
  
  printf("Questão 2 \n\n");
  
  for( i = 0 ; i <= 10; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%d", &notas[i]);
    
     	if(notas[i]%2==0){	
  		 quantidade=quantidade +1;
  		 
	  }
	else{
	
	}  
}
	printf("\nQuantidade de numeros pares e: %d\n",quantidade);
 


}
