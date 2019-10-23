
#include <stdio.h> //biblioteca padrão para comandos i/o

main ()
{
  int vt, vb,vn,vv, contavb,contavn,contavv;
  		
  printf("Digite o total de votos: ");
  scanf("%d", &vt);
  
    printf("Digite o total de votos brancos: ");
  scanf("%d", &vb);
  
    printf("Digite o total de votos  nulos: ");
  scanf("%d", &vn);
  
    printf("Digite o total de votos validos: ");
  scanf("%d", &vv);
  
  contavb=((vb*100)/vt);
  
  contavn=((vn*100)/vt);
  
  contavv=((vv*100)/vt);
  
  printf("Esse e o valor de brancos: %d%%\n", contavb);
  printf("Esse e o valor nulos: %d%%\n", contavn);
  printf("Esse e o valor de validos: %d%%\n", contavv);
  
}
