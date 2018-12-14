#include<stdio.h>
#include "add_function.h"
int main()
{
int a=10;
int b=20;
int c;

//c=a+b;
c=add_number(a,b);

printf("%d\n",c);
return 0;
}

