#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
fork();
printf("Hello World!, from process with PID : %d\n",getpid());
return 0;
}
