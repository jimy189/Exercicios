#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <stdlib.h>//necess�rio para o system ("pause")

main ()
{
int base,altura,conta;

printf("Digete um valor para base\n");
scanf("%d",&base);
printf("Digete um valor para altura\n");
scanf("%d",&altura);


conta=base*altura;

printf("O valor da area e: %d\n",conta);

}
