#include <stdio.h> //biblioteca padrão para comandos i/o


main()
{

int mes;

printf("Escolha o mes, janeiro-1. feveireiro-2, marco-3, abril-4, maio-5, junho-6, julho-7, agosto-8, setembro-9, outubro-10, novenbro-11, dezembro-12\n");
scanf("%d",&mes);

	switch(mes)
{
	case 1:
	printf("Janeiro");
	break;	
	
	case 2:
	printf("fevereiro");
	break;	
	
	case 3:
	printf("marco");
	break;	
	
	case 4:
	printf("abril");
	break;	
	
	case 5:
	printf("maio");
	break;	
	
	case 6:
	printf("junho");
	break;	
	
	case 7:
	printf("julho");
	break;	
	
	case 8:
	printf("agosto");
	break;	
	
	case 9:
	printf("sentembro");
	break;	
	
	case 10:
	printf("outubro");
	break;	
	
	case 11:
	printf("novembro");
	break;	
	
	case 12:
	printf("dezembro");
	break;	
	
	
	
     default:
    printf ("Valor invalido!\n");
	
	}	
		
	
}
