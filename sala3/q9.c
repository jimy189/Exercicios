#include <stdio.h> //biblioteca padrão para comandos i/o

main()
{
int i,n,soma,media;
		
soma=0;

for(i=1;i<=3;i++){
printf("\nDigete um numero inteiro\n");
scanf("%d",&n);

soma=soma+n;
media=(n+n+n)/3;

}

printf("\nSoma: %d\n",soma);
printf("\nMedia: %d\n",media);

}
