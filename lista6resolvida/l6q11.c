#include <stdio.h>
#include <stdlib.h>

 void main(){

char nome[20];
int i;
{
printf("Insira um nome: ");
  gets(nome);
  printf("Este e o nome sem as vogais: ");
  for (i=0;nome[i] != '\0';i++) {
      if(nome[i]!='a'&&nome[i]!='e'&&nome[i]!='i'&&nome[i]!='o'&&nome[i]!='u'){
          printf("%c",nome[i]);
      }
      }
  }
 }
