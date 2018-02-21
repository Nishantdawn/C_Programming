# 1 "mul_function.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "mul_function.c"
int add_number(int,int);

int mul_number(int x, int y)
{
int z=0,i=0;
for(i=0;i<y;i++)
z=add_number(z,x);
return z;
}
