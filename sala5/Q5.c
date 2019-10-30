/*- Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir. Para
cada número lido, mostre uma tabela contendo o valor lido e o seu cubo.*/

/*- Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média
ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10*/

main()
{
int i;
float n1,prox,cubo;

	
for(i!=1;i<=2;i++)
{
	
	printf("\nDigite um numero\n");
  	scanf("%f", &n1);	
   
  	
  	
	prox=n1+1;
	cubo=prox*prox*prox;
	
printf("\nProximo numero:%f \n", prox);
printf("\nSeu cubo:%f \n", cubo);
		
}

	
}
