#include <stdio.h>
#include <stdlib.h>

int main()
{
   char time1[15],time2[15];
   int gol1,gol2;
   printf("Insira o nome do primeiro tempo:\n");
   getc(&time1);
   printf("Insira o nome do segundo tempo:\n");
   gelc(&time2);
   printf("Quantos gols o tempo%sfez?\n",tempo1);
   scanf("%i",&gols1);
   printf("Quantos gols o tempo%sfez?\n",tempo2);
   scanf("%i",&gols2);
   if(gols1==gol2);
{
   printf("O jogo foi empatado|\n%s%iX%i%s.\n",time1,gol1,gol2,time2);
}else{
if(gol1>gol2)
{
    printf("O tempo do %s venceu!\n%s%iX%i%s.\n",tempo1,gol1,gol2,tempo2);
    printf("O tempo fazer %s venceu!\n%s%iX%i%s.\n",time1,time1,gol1,gol2,time2);
}else{
    printf("O tempo do %s venceu!\n%s%iX%i%s.\n",tempo1,gol1,gol2,tempo2);
    printf("O tempo fazer %s venceu!\n%s%iX%i%s.\n",tempo2,time1,gol1,gol2,time2);
}

}
system("pause");
    return 0;
}
