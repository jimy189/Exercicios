#include <stdio.h> //biblioteca padrão para comandos i/o
#include <stdlib.h>//necessário para o system ("pause")


main()
{
int senha, usuario;


printf("\nDigite o login do usuario: \n");
  scanf("%d", &usuario);
  
printf("\nDigite a senha: \n");
  scanf("%d", &senha);	
	
	
	switch (usuario)
  {
    case 1234 :
    
if(usuario==1234){
	
 printf ("Usuario correta! \n");
}

else
{
	printf ("Usuario incorreto! \n");	
}
    break;
   default :
    printf ("USUARIO INCORRETO!\n");   
}

	switch (senha){
	
    case 9999 :

if(senha==9999){

 printf ("Senha correta! \n");
}

 else
 {
  printf ("Senha incorreto! \n");	
 }
    break;
    default :
    printf ("Senha ou USUARIO INCORRETO!\n");
}

}
    

 
 
