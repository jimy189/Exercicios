/*Elabore um algoritimo que leia um vetor de 10 posi��es e imprima quantos
n�meros s�o positivos e quantos s�o impar.*/

#include<stdio.h>

 main()
{
  int i, n[6],impar=0,positivo=0;
  // declarando e inicializando o vetor notas
  
  printf("Quest�o 6 \n\n");
  
  for( i = 0 ; i <=9; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%d", &n[i]);  
 
}

	  for( i = 0 ; i <= 4; i++)
  {	   	   
  	
  		
     	if(n[i]>0){	
  				
  			  positivo=positivo +1;	
		
		  		}
	  		
		else{
				positivo=positivo;			
			
			;
		}  

		if(n[i]%2==0){	
  				
  			  impar=impar;	
		
		  		}
	  		
		else{
  			  impar=impar +1;				
			
			
		} 
 
}
	printf("\nA quantidade de numeros positivos e: %d\n", positivo);

	printf("\nA quantidade de numeros impares e: %d\n", impar);

}
