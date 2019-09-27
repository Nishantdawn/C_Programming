#include<stdio.h>
#include<unistd.h>

void *myFun()
{
int i;
for(i=0;i<5;i++){
printf("message from Function \n");
sleep(1);
}
    return NULL;
}

int main()
{
myFun();
int i;
for(i=0;i<5;i++){
printf("message from main \n");
sleep(1);
}

return 0;
}
