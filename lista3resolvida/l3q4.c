#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    printf("Insira um numero:\n");
    scanf("%i",&v);
    if (v==0)
    {
    printf("O valor %i e zero.\n",v);
    }else{
    if (v>0)
    {
    printf("O valor %i e positivo.\n",v);
    }else{
        if(v<0)
    printf("O valor %i e negativo.\n",v);


    }
    }
    system("pause");

    return 0;


}
