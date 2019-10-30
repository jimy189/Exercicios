#include<stdio.h>

 main()
{
  int i, n[6],soma=0,maior=0;
  // declarando e inicializando o vetor notas
  
  printf("Questão 5 \n\n");
  
  for( i = 0 ; i <= 4; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%d", &n[i]);  
 
}

	  for( i = 0 ; i <= 4; i++)
  {	   	   
  	
  		
     	if(n[i]>maior){	
  				
  			  maior=n[i];	
	  		}
	  		
		else{
			maior=maior;
		}  

 
}
	printf("\nO maior indice e: %d\n", maior);


}
