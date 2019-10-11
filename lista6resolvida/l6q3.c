#include <stdio.h>
#include <stdlib.h>
/*l6q3*/
int main()
{
   char nome[50];
   printf("Insira um nome: ");
   gets(nome);
   if(nome[0]== 'a'|| nome[0]== 'A'){
   printf("%s",nome);
}else{
    printf("Nao comeca com a|A.");
}
    return 0;
}

