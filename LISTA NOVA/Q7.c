main ()
{
float n1,n2,n3;
int media;

printf("Digete a primeira nota\n");
scanf("%f",&n1);

printf("Digete a segunda nota\n");
scanf("%f",&n2);

printf("Digete a terceira nota\n");
scanf("%f",&n3);

media= ((n1+n2+n3)/3);

if(media>=7)
{
	printf("Aprovado\n");
}
else
{
	printf("Reprovado\n");
}



}
