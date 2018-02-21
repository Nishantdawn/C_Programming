#include<stdio.h>
int add_number(int,int);
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

