#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
pid_t f_pid;

f_pid=fork();
if(f_pid)
printf("Hello World!, from process with PID : %d,  fork() returned value : %d, my parent is : %d and I am Parent Process \n",getpid(),f_pid,getppid());
else
printf("Hello World!, from process with PID : %d,  fork() returned value : %d, my parent is : %d and I am Child Process \n",getpid(),f_pid,getppid());
return 0;
}
