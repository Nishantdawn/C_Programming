#include<stdio.h>
int add_number(int,int); 
int mul_number(int,int);

int main()
{
int a=10;
int b=20;
int c;
int d;
//c=a+b;
//d=a*b;
c=add_number(a,b);
d=mul_number(a,b);
printf("%d\n",c);
printf("%d\n",d);
return 0;
}

