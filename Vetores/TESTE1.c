#include<stdio.h>

 main()
{
  int i;
  float notas[5] ;
  // declarando e inicializando o vetor notas
  
  printf("Estudando e testando valores de vetores \n\n");
  
  for( i = 0 ; i <= 4; i++)
  {
    printf("\nDigite as notas do aluno\n");
    scanf("%f", &notas[i]);
  }
  
  
    for( i = 0 ; i <= 4; i++)
  {
    printf("notas[%d] = %.1f\n",i, notas[i]);
  }
  
 
}
