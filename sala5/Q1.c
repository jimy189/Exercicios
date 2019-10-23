#include <stdio.h>
main()
{
	int i,n,soma=0;
	
	for(i=13;i<=73;i++)
	{
		
		printf("\nDigite um numero entre 13 a 73\n");
		scanf("%d", &n);
		
		soma=soma+n;
		
		
	}
	printf("Media: %d",soma/60);
}
