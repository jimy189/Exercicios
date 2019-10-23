#include <stdio.h>

main(){
	int i,n;
	
	printf("\Digete um numero da tabuada\n");
	scanf("%d",&n);
	
	while(i<=10)
	{
	
	printf("\nTabuada: %d x %d=%d\n",n,i,n*i);
	i++;
	}
}
