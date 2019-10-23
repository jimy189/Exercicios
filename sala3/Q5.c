#include <stdio.h> //biblioteca padrão para comandos i/o



main()
{
int n,i,maior;
		

	
for(i=1;i<=20;i++)
{
	
	printf("\n Digite um numero \n");
  scanf("%d", &n);	
  
  	
if(n>maior){
maior=n;	
}
else{
maior=maior;	
}	
	
}
printf("\n%d\n",maior);

}
