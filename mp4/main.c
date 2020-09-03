#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
pid_t f_pid;

f_pid=fork();
printf("Hello World!, from process with PID : %d,  fork() returned value : %d, my parent is : %d \n",getpid(),f_pid,getppid());
return 0;
}
