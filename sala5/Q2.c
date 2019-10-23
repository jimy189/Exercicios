/*2 - Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados:
sexo (0feminino, 1-masculino), idade e altura. Faça um algoritmo que leia as informações coletadas
e mostre as seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;*/

#include <stdio.h>


 main()
{
  int opcao, i, idade,  H=0, M,idadeH=0,idadeM = 0; 
  float altura,Hm=0,Hh=0,somah,media;
  
  while (i<=3)
  {
    	
  	
  printf("\nDigite um numero para escolha da pesquisa, 1-Masculino, 2-Feminino \n");
  scanf("%d", &opcao);	
  

	switch (opcao)
  {
    case 1 :
    	printf("\nDigite a altura do Homem \n");
  		scanf("%f", &altura);	
    Hh=Hh + altura;	
	H=H +1;
	idadeH=idadeH + idade;
    break;
    
    case 2 :
   printf("\nDigite a altura da Mulher \n");
  		scanf("%f", &altura);	
    Hm=Hm + altura;	
	M=M +1;
	idadeM=idadeM + idade;
    break;
    
    
    
     default :
    printf ("Valor invalido!\n");
	media=(idadeH+idadeM)/(H+M);
 }
i++;	
}  		
    
  printf("\nMedia de idade do Grupo:%f \n",media);

}
