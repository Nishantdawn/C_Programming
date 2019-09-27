#include<stdio.h>
#include<unistd.h>

void *myFun()
{
    sleep(1);
    printf("Printing from Function \n");
    return NULL;
}

int main()
{
printf("Hello World!\n");
myFun();
return 0;
}
