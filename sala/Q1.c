#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int curso;
float nota1, nota2,media;	
	
printf("\nDigite a primeira nota: \n");
  scanf("%f", &nota1);	

printf("\nDigite a segunda nota: \n");
  scanf("%f", &nota2);

printf("\nDigite  um numero para o curso, sistema de informacao-1, administracao-2, fisioterapia-3, direito-4\n");
  scanf("%d", &curso);	
	
	switch (curso)
  {
    case 1 :
    media= (nota1+nota2)/2;
    printf ("Nota de sistema e: %f\n",media);
    
    	if(media>=7){
	printf("Voce esta aprovado");
	}
	else{
		printf("\n Voce esta reprovado\n");
	}
    break;
    
    case 2 :
    media= (nota1+nota2)/2;
    printf ("Nota de sistema e: %f\n",media);
      	if(media>=5){
	printf("Voce esta aprovado");
	}
	else{
		printf("\n Voce esta reprovado\n");
	}
    break;
    
    case 3 :
    media= (nota1+nota2)/2;
    printf ("Nota de sistema e: %f\n",media);
      	if(media>=8){
	printf("Voce esta aprovado");
	}
	else{
		printf("\n Voce esta reprovado\n");
	}
    break;
    
    case 4 :
    media= (nota1+nota2)/2;
    printf ("Nota de sistema e: %f\n",media);
      	if(media>=9){
	printf("Voce esta aprovado");
	}
	else{
		printf("\n Voce esta reprovado\n");
	}
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
 
}
