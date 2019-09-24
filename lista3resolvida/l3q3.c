#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qa,qm,qn,qd;
    printf("Insira quantidade atual de estoque:\n");
    scanf("%f",&qa);
    printf("insira uma quantidade maxima de estoque\n");
    scanf("%f",&qm);
    printf("insira ua quantitade minima de estoque\n");
    scanf("%f",&qn);
    qd=(qm+qn)/2;
    if(qa>qd) {
        printf("Nao realizar compra.\n\n");

    }else{
        printf("efetuar compra.\n\n");

    }
    system("pause");

        return 0;
}
