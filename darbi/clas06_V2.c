#include<stdio.h>

void main()
{
char a=100;
printf("Operacija >>; %d>>1 rezultats %d\n",a,a>>1);

char b;
printf("b mainiga \"sakuma\" stavoklis (uzreiz pec deklaresanas): %d\n",b);

b=a>>2;
printf("Operacija >>: %d>>%d rezultats %d\n",a,2,b);

char c;
printf("Papetisim operaciju\n-----------------------------------\n");
printf("Cienijamais lietotajs, ludzu, ievadi operacijas 1. operandu: ");
scanf("%d",&a);
printf("1. operands: %d\n",a);
printf("Cienijamais lietotajs, ludzu , ievadi operacijas 2. operandu: ");
scanf("%d",&c);
printf("2. operands: %d\n",c);
b=(a>>c);
printf("----------------------------------\nSkaties, kas ir sanacis: %d\n",100>>2);
printf("----------------------------------\nSkaties, kas ir sanacis: %d\n",b);
}
