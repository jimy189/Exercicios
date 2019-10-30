/*3 - - Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário se ele quer continuar ou parar. Quando o usuário digitar 0 o
algoritmo para.*/


#include <stdio.h>


 main()
{
  int sexo, i=1,H=0,M=0,idade,idadeh=0,idadem=0,idademaior=0,intervalo=0; 
  
	while(i!=0)
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
		  
		  
		  
		  	if(idade>=18 && idade<=35){
  			
  			intervalo=intervalo +1;	
		  }
  		else{
  		
		  	intervalo=intervalo;	
		  }	
		  
		  
		printf("\nDigite 0 para parar o programar parar \n");
  			scanf("%d", &i);
		
	
  
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
		  
		    	if(idade>=18 && idade<=35){
  			
  				intervalo=intervalo +1;	
		  }
  		else{
  		
		  		intervalo=intervalo;	
		  }	
		  
		  
			
		printf("\nDigite 0 para parar o programar parar \n");
  			scanf("%d", &i);
	

	M=M+1;
	idadem=idadem +idade;
	

	
    break;
  
  
    
     default :
    printf ("Valor invalido!\n");



 }

}  	
	
 		printf("Programa Finalizado!\n");
        printf("\nMaior idade e :%d \n",idademaior);
  		printf("\nMedia de idade dos homens:%d \n",idadeh/H);  
 		printf("\nNumero de pessoas entre  18 e 35 e:%d \n",intervalo); 
}
