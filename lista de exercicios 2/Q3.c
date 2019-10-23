#include <stdio.h> //biblioteca padrão para comandos i/o

main ()
{
  int v1, v2,numeromaior,numeromenor;
  		
  printf("Digite o primeiro valor: ");
  scanf("%d", &v1);
  
  printf("Digite o segundo valor: ");
  scanf("%d", &v2);

if (v1 > v2)
    {
        numeromaior = v1;
        numeromenor = v2;
    }
    else
    {
        numeromenor = v1;
        numeromaior = v2;
    }
    
if (v1==v2)
{
	printf("O quadrado e: %d", v1*v2);
}
else{
	printf("\nO cubo e: %d", v1*v1*v1);
	printf("\nO cubo e: %d", v2*v2*v2);
}

if(numeromaior %2==0){
	printf("\nNUMERO E PAR: %d",numeromaior);
}
else{
	
}

if(numeromenor<0){
	printf("\nNUMERO E negativo: %d",numeromenor);
}
else{
		printf("\nNUMERO E negativo: %d",numeromenor);
}

	
 
}

