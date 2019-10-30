#include<stdio.h>

 main()
{
  int i, notas[10];
  // declarando e inicializando o vetor notas
  
  printf("Estudando e testando valores de vetores \n\n");
  
  for( i = 0 ; i <= 10; i++)
  {
    printf("\nDigite as notas do aluno\n");
    scanf("%d", &notas[i]);
    
  
    
}

	for( i = 0 ; i <= 10; i++)
  {
  
    
  	if(notas[i]%2==0){	
  		 printf("notas Par[%d] = %d\n",i, notas[i]);
	  }
	else{
		 printf("notas Impar[%d] = %d\n",i, notas[i]);
	}  
    
}
 
}
