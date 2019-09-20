#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>


void *thread_fun(void *arg);
char message[] = "Hello World";

int main()
{
int status;
pthread_t pid;
void *msg = "Bye";
int i = 0;

status = pthread_create(&pid,NULL,&thread_fun,(void*)message);
if(status != 0)
{
	printf("Threat failed\n");
	exit(EXIT_FAILURE);
}
while(i++<10){
	printf("This is main\n");
	sleep(1);}

// Wait for thread to terminate
status = pthread_join(pid,&msg);
if(status != 0)
{
	printf("Thread join failed\n");
	exit(EXIT_FAILURE);
}
else
	printf("Thread Joined\n");
exit(EXIT_SUCCESS);
}

void *thread_fun(void *arg)
{
int i = 0;
while(i++<10){
	printf("This is thread \n");
	sleep(2);
}
}
