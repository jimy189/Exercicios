/*2 - Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados:
sexo (0feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas
e mostre as seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;*/

#include <stdio.h>


 main()
{
  int sexo, i,H=0,M=0,idade,idadeh=0,idadem=0; 
  float altura,Hh=0,Hm=0;
  
  for(i=1;i<=3;i++)
  {
    	
  	
  printf("\nDigite um numero para votar, 1-Masculino, 2-Feminino \n");
  scanf("%d", &sexo);	


  

	switch (sexo)
  {
    case 1 :
    	 printf("\nDigite a altura dos homens \n");
  			scanf("%f", &altura);	
  		printf("\nDigite a idade dos homens \n");
  			scanf("%d", &idade);
  			

	H=H+1;
	Hh=Hh +altura;
	idadeh=idadeh +idade;
	

	
    break;
    
    
     case 2 :
    	 printf("\nDigite a altura da mulher \n");
  			scanf("%f", &altura);	
  			printf("\nDigite a idade das mulheres \n");
  			scanf("%d", &idade);

	M=M+1;
	Hm=Hm +altura;
	idadem=idadem +idade;
	

	
    break;
  
  
    
     default :
    printf ("Valor invalido!\n");

 }
	
}  		
    
  printf("\nMedia de idade da turma:%d \n",(idadeh+idadem)/(H+M));
  printf("\nMedia de altura das mulheres:%f \n",Hm/M);
  printf("\nMedia de idade dos homens:%d \n",idadeh/H);
}
