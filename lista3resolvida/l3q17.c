#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,x=1;
   printf("Insira um numero:");
   scanf("%d",&n);
   while(n==0)
   {
    system("cls");
    printf("O numero não pode ser igual a zero.\n");
    printf("Insira um numero:\n");
    scanf("%d",&n);
   }
   while(x<=n)
   {
    printf("%d\n",x);

    x++;
   }
    return 0;
}
