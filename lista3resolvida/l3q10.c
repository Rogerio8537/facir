#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Insira dois numeros:\n");
    scanf("%i%i",&a,&b);
    if(a==b)
    {
    printf("Numeros iguais.\n");
    }else{
    if(a>b)
    {
    printf(" O primeiro � maior.\n");
    }else{
    printf(" O segundo � maior.\n");
    }
    }
    system("pause");

    return 0;
}
