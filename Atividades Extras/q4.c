#include <stdio.h>
main()
{
	int op, base, altura
	float resultado
	printf("digite o numero da operacao);
	printf("1-area do quadrado.\n2-area do triangulo.\n3-area do retangulo\n4-cubo de um numero\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1: 
		printf("digite o valor dos lados");break;
		scanf("%d", &lado);break;
		resultado=lado*lado;break;
		printf("area do quadrado:%d",resultado);break;
		case 2: 
		printf("digite a base\n");break;
		scanf("%d", base);break;
		printf("digite a altura\n");break;
		scanf("%d", altura);break;
		resultado=(base*altura)/2;break;
		printf("area do triangulo:%d",resultado);break;
		case 3:
		printf("digite a base\n");break;
		scanf("%d", base);break;
		printf("digite a altura\n");break;
		scanf("%d", altura);break;
		resultado=base*altura;break;
		printf("area do retangulo:%d",resultado)break;
		case 4:
		printf("digite um numero");break;
		scanf("%d", &cubo);break;
		resultado=cubo*cubo*cubo;break;
		printf("cubo:%d",cubo);break;
		default: 
		
			
			
		
	}
}
