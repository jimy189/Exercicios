//3 � O ibope ir� realizar uma pesquisa sobre a prefer�ncia da popula��o em rela��o a marcas de ve�culos.
//Ser�o entrevistados 1500 pessoas que dever�o escolher uma das seguintes op��es apresentadas: ( 1-GM, 2-
//VW, 3-FIAT, 4-FORD, 5-REANULT). Elabore um algoritmo que calcule e apresente como resultado a
// de votos para cada op��o apresentada. Valor (2,0). Usar Enquanto

#include <stdio.h>


 main()
{
  int opcao, i,tgm=0, tvw=0, tfiat=0, tford=0, treanult = 0; 

  
  while (i<=10)
  {
    	
  	
  printf("\nDigite um numero para votar, 1-gm, 2-tvw,3-fiat,4-tford,5-treanult \n");
  scanf("%d", &opcao);	
  

	switch (opcao)
  {
    case 1 :
	tgm=tgm +1;
    break;
    
    case 2 :
    tvw=tvw +1;
    break;
    
    case 3 :
    tfiat=tfiat +1;	
    break;
    
      case 4 :
    tford=tford +1;	
    break;
    
      case 5 :
    treanult=treanult +1;	
    break;
    
     default :
    printf ("Valor invalido!\n");

 }
i++;	
}  		
    
  printf("\nTotal de Gm:%d \n",tgm);
  printf("\nTotal de vw:%d \n",tvw);
  printf("\nTotal de fiat:%d \n",tfiat);
  printf("\nTotal de ford:%d \n",tford);
  printf("\nTotal de reanult:%d \n",treanult);
}
