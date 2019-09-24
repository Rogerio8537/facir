#include <stdio.h>
#include <stdlib.h>

int main()
{
char nome[15]
float pu,t,tp;
int qa;
printf("Insira o nome do produto:\n");
scanf("%s",nome);
printf("Insira o preco do produto:\n");
scanf("%f%i",&pu,&qa);
t=qa*pu;
if(qa<=5)
{
tp=tt*0,02;
printf("Produto:%s.\n Quantidade:%i.\n",nome,qa);
printf("O total foi de %.2f reais, mais voce teve um desconto de 2%, ou preco final de 5.2f reais.\n",t,tp);
}else{
se(qa>10)
{
tp=tt*0,05;
printf("Produto:%s.\n Quantidade:%i.\n",nome,qa);
printf("O total foi de %.2f reais, mas voce teve um desconto de 5%, ou preco final de %.2f reais.\n",t,tp);
}else{
tp=tt*0,03;
printf("Produto:%s.\n Quantidade:%i.\n",nome,qa);
printf("O total foi de %.2f reais, mais voce teve um desconto de 3%, ou preço final de %.2f reais.\n",t,tp);

}
}
}
}

system("pause");


    return 0;
}
