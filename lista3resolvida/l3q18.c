#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,x;
n=8;
m=1;
while(x<80)
{
x=n*m;
printf("%iX%i=%i\n",n,m,x);
m++;
}
    return 0;
}
