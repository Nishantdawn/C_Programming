#include "add_function.h"

int mul_number(int x, int y)
{
int z=0,i=0;
for(i=0;i<y;i++)
z=add_number(z,x);
return z;
}

