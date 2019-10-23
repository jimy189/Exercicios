#include <stdio.h>


 main()
{
  int sexo, i,H=0,M=0; 
  float alturamaior=0,altura,Hh=0,Hm=0,th=0;
  
  for(i=1;i<=10;i++)
  {
    	
  	
  printf("\nDigite um numero para votar, 1-Masculino, 2-Feminino \n");
  scanf("%d", &sexo);	


  

	switch (sexo)
  {
    case 1 :
    	 printf("\nDigite a altura dos homens\n");
  			scanf("%f", &altura);	

	H=H+1;
	Hh=Hh +altura;
	
	if(altura>alturamaior){
  	alturamaior=altura;
  }
  else{
  	alturamaior=alturamaior;
  }
	
    break;
    
    
     case 2 :
    	 printf("\nDigite a altura da mulher \n");
  			scanf("%f", &altura);	

	M=M+1;
	Hm=Hm +altura;
	
	if(altura>alturamaior){
  	alturamaior=altura;
  }
  else{
  	alturamaior=alturamaior;
  }
	
    break;
  
  
    
     default :
    printf ("Valor invalido!\n");

 }
	
}  		
    
  printf("\nMaior Altura:%f \n",alturamaior);
  printf("\nMedia de altura dos homens:%f \n",Hh/H);
   printf("\nMedia de altura da turma:%f \n",(Hh+Hm)/(H+M));
}
