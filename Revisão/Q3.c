/*3 - - Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário se ele quer continuar ou parar. Quando o usuário digitar 0 o
algoritmo para.*/


#include <stdio.h>


 main()
{
  int sexo, i,H=0,M=0,idade,idadeh=0,idadem=0,idademaior=0; 
  
  for(i=1;i<=3;i++)
  {
    	
  	
  printf("\nDigite um numero para votar, 1-Masculino, 2-Feminino \n");
  scanf("%d", &sexo);	


  

	switch (sexo)
  {
    case 1 :	
  		printf("\nDigite a idade dos homens \n");
  			scanf("%d", &idade);
  			
  		if(idade>idademaior){
  			
  		idademaior=idade;	
		  }
  		else{
  		
		  idademaior=idademaior;	
		  }	

	H=H+1;
	idadeh=idadeh +idade;
	

	
    break;
    
    
     case 2 :
    	 	
  			printf("\nDigite a idade das mulheres \n");
  			scanf("%d", &idade);
  			
  				if(idade>idademaior){
  			
  		idademaior=idade;	
		  }
  		else{
  		
		  idademaior=idademaior;	
		  }	

	M=M+1;
	idadem=idadem +idade;
	

	
    break;
  
  
    
     default :
    printf ("Valor invalido!\n");

 }
	
}  		
    
  printf("\nMaior idade e :%d \n",idademaior);
  printf("\nMedia de idade dos homens:%d \n",idadeh/H);
}
