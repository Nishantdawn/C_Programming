#include<stdio.h>
int add_number(int,int); // function declaration
int main()
{
int a=10;
int b=20;
int c;

//c=a+b;
c=add_number(a,b);  //function calling 

printf("%d\n",c);
return 0;
}

int add_number(int x, int y)  //function definition
{
int z;
z=x+y;
return z;
}
