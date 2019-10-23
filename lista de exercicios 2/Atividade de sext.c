#include <stdio.h> //biblioteca padrão para comandos i/o

main ()
{
  int v1, v2, v3,vl1,vl2,vl3;
  		
  printf("Digite o primeiro valor: ");
  scanf("%d", &v1);
  
  printf("Digite o segundo valor: ");
  scanf("%d", &v2);
  
   printf("Digite o terceiro valor: ");
  scanf("%d", &v3);
  
  
  
if (v1!=v2 && v1!=v3 && v2!=v3)
    {
       
       if ( v1 < v2 && v2<v3)
    {
        printf("valor crescente: %d, %d, %d ", v1,v2,v3);
    }
    else
    {
      printf("valor crescente: %d, %d, %d ", v3,v2,v1);
    }
       
       
       
       if ( v2 < v3 && v2<v1)
    {
        printf("valor crescente: %d, %d, %d ", v2,v1,v3);
    }
    else
    {
      printf("valor crescente: %d, %d, %d ", v3,v1,v2);
    }
       
      if ( v2 < v3 && v2<v1)
    {
        printf("valor crescente: %d, %d, %d ", v2,v3,v1);
    }
	else{
	}
       
      
    }
    else{
    	printf("Nao e possivel dizer quem e maior ");
	}


 
}

