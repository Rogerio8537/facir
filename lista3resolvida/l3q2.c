#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,d,c,sa;
    int nc;
    printf("insira o numero da conta:\n");
    scanf("%i",&nc);
    printf("Insira o saldo:\n");
    scanf("%f",&s);
    printf("Insira seu debito:\n");
    scanf("%f",&d);
    printf("Insira seu credito:\n");
    scanf("%f",c);
    sa=s-d+c;
    if(sa<0){
    printf("saldo atual:%.2f.\n saldo negativo.\n\n",sa);
    }else{
    printf("saldo atual:%.2f.\n saldo positivo.\n\n",sa);


    }
    return 0;
}




