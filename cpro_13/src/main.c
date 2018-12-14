#include<stdio.h>
#include "add_function.h"
#include "mul_function.h"
#include "sub_function.h"
#include "div_function.h"
int main()
{
int a=10;
int b=20;
int c;
int d;
int e;
int f;

//c=a+b;
//d=a*b;
//e=b-a;
//f=b/a;

c=add_number(a,b);
d=mul_number(a,b);
e=sub_number(b,a);
f=div_number(b,a);

printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
return 0;
}

