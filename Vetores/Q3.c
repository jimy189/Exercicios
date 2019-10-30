#include<stdio.h>

 main()
{
  int i, notas[6],soma=0;
  // declarando e inicializando o vetor notas
  
  printf("Questão 3 \n\n");
  
  for( i = 0 ; i <= 5; i++)
  {
    printf("\nDigite um numero\n");
    scanf("%d", &notas[i]);
    
     	if(notas[i]%2==0){	
  		 soma=soma; 
	  }
	else{
		 soma=soma +notas[i];
	}  
 
}
	printf("\nQuantidade de numeros impares e: %d\n",soma);


}
