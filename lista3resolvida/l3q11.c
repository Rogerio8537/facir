#include <stdio.h>
#include <stdlib.h>

int main()
{
int h1,h2,m1,m2,x,y;
printf("Entre a idade de dois homens:\n");
scanf("%i%i",&h1,&h2);
printf("Entre a idade de duas mulhes:\n");
scanf("%i%i",&m1,&m2);
while(h1==h2||m1==m2);
{
system("cls");
printf("As idedes nao podem ser iguais entre o mesmo sexo.\n");
printf("Entre a idade de dois homens:\n");
scanf("%i%i",&h1,&h2);
printf("Entre com a idade de duas mulheres:\n");
scanf("%i%i",&m1,&m2);
}
if(h1>h2&&m1>m2)
{
x=h1+h2;
y=m1+m2;
printf("A soma das idades do homem mais velho com a mulher mais nova e%i.\n",x);
printf("O produto das idades do homem mais novo com a mulher mais velha e %i.\n",y);
}else{
if(h1>h2&&m1<m2)
{
x=h1+m1;
y=h2+m2;
printf("A soma das idades do homem mais velho com a mulher mais nova e%i.\n",x);
printf("O produto das idades do homem mais novo com a mulher mais velha e %i.\n",y);
}else{
if(h1<h2&&m1>m2)
{
x=h2+m2;
y=h1*m1;
printf("A soma das idades do homem mais velho com a mulher mais nova e%i.\n",x);
printf("O produto das idades do homem mais novo com a mulher mais velha e %i.\n",y);
x=h2+m1;
y=h1*m2;
printf("A soma das idades do homem mais velho com a mulher mais nova e%i.\n",x);
printf("O produto das idades do homem mais novo com a mulher mais velha e %i.\n",y);

}
}
}
system("pause");

    return 0;
}
