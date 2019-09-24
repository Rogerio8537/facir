#include <stdio.h>
#include <stdlib.h>

int main()
{
float ma,eu,n1,n2,n3;
printf("Insira suas 3 notas e a media do exercicio:\n");
scanf("%f%f%f%f",&n1,&n2,&n3,&eu);
ma=(n1+(n2*2)+(n3*3)+eu)/7;
if(ma>=9)
{
printf("Conceito A.\n");
}else{
if(ma>=7,5&&ma<9)
{
printf("Conceito B.\n");
}else{
if(ma>=6&&ma<7,5)
{
printf("Conceito C.\n");
}else{
printf("Conceito D.\n");
}
}
}
system("pause");

    return 0;
}
