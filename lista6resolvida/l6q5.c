#include <stdio.h>
#include <stdlib.h>

void  main () {

int x, y = 0 ;
char nome [ 30 ];

printf ( " Digite um nome: " );
gets (nome);
for (x = 0 ; nome [x]! = ' \ 0 ' ; x ++)
 {
    if ( isalpha (nome [x])) {
            y ++;
        }
}
printf ( " Voce digitou % d letras. " , y);
}
