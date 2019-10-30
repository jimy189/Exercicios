/*- Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média
ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10*/

main()
{
int i;
float media,n1,n2,n3;

	
for(i=1;i<=10;i++)
{
	
	printf("\nDigite a primeira nota\n");
  	scanf("%f", &n1);	
   
  	printf("\nDigite a segunda nota \n");
  	scanf("%f", &n2);		

		printf("\nDigite a terceira nota \n");
  		scanf("%f", &n3);	
  	
	media=(n1*2+n2*4+n3*3)/10;
	printf("\nMedia:%f \n", media);		
}


}
