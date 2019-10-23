#include <stdio.h> //biblioteca padrão para comandos i/o


main()
{

int mes;

printf("Escolha  a traducao, CAO-1. GATO-2, PEIXE-3, MESA-4, JANELA-5, passaro-6\n");
scanf("%d",&mes);

	switch(mes)
{
	case 1:
	printf("Dog");
	break;	
	
	case 2:
	printf("Cat");
	break;	
	
	case 3:
	printf("Fish");
	break;	
	
	case 4:
	printf("tablw");
	break;	
	
	case 5:
	printf("window");
	break;	
	
	case 6:
	printf("bird");
	break;	
	
	
     default:
    printf ("Valor invalido!\n");
	
	}	
		
	
}
