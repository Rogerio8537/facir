#include <stdio.h>
#include <stdlib.h>
/*Ler o salario fixo eo valor das vendas efetuadas pelo vendedor de uma empresa.
/sabendo que ele recee uma comissão de 3% sore o total da venda ate R$ 1.500,00
/mais 5% sobre o que ultrapassar esse valor, calcular e escrever o seu salario. */
int main()
{
    float sf,vv,vx,tv,st;
    printf("INSIRA SEU SALARIO:\n");
    scanf("%f",&sf);
    printf("INSIRA O VALOR DE VENDAS:\n");
    scanf("%f",&vv);
    if(vv>1500){
        vx=vv-1500;
        vv=1500;
    }
    tv=vv+vx;
    if(tv>1500){
        st=st+(vv*0,03+vx*0,05);

    }else{
    st=sf+(vv*0,03);
    }
    printf("SEU SALARIO TOTAL FOI DE %.2f REAIS.\n",st);

        return 0;
}
