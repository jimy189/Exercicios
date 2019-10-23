#include <stdio.h>

main()
{
	float n1, n2, media;
	int numero;
	
	printf("digite a primeira nota\n");
	scanf("%d", &n1);
	printf("digite a segunda nota\n");
	scanf("%d", &n2);
	media=(n1+n2)/2;
	printf("digite o numero do seu curso:\n");
	printf("1- sistema de informacao.\n2- administracao.\n 3- fisioterapia.\n 4- direito\n");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1: 
		if(media>7 || media==7)
		{
			printf("aprovado/n");break;
		}
		else
		{
			printf("reprovado\n");break;
		}
		case 2:
			if(media>5 || media==5)
			{
				printf("aprovado\n");break;
			}
			else
			{
				printf("reprovado");break;
			}
		case 3:
				if(media>8 || media==8)
			{
				printf("aprovado\n");break;
			}
			else
			{
				printf("reprovado");break;
			}
		case 4:
			if(media>9 || media==9)
			{
				printf("aprovado\n");break;
			}
			else
			{
				printf("reprovado");break;
			}
	default: printf("codigo invalido");
	}
	
}
