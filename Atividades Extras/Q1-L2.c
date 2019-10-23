#include <stdio.h>
main()
{
	int n1,n2,op;
	float resultado;
	
	printf("digite o primeiro numero\n");
	scanf("%d", &n1);
	printf("digite o segundo numero\n");
	sacnf("%d", &n2);
	printf("digite o numero da operacao\n");
	printf("1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1: resultado=n1+n2;break;
		case 2: resultado=n1-n2;break;
		case 3: resultado=n1*n2;break;
		case 4: resultado=n1/n2;break;
		default: printf("opcao invalida\n");
	}
	printf("%d",resultado);
	
}
