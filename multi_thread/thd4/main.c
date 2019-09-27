#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <pthread.h>

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

pthread_t thread_id;
int i;
pthread_create(&thread_id, NULL, myFun, NULL);
for(i=0;i<5;i++){
printf("message from main \n");
sleep(1);
}
pthread_join(thread_id, NULL);
return 0;
}
