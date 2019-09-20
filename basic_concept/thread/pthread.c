#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myThread()
{
sleep(1);
printf("Printing from thread\n");
return 0;
}

int main()
{
pthread_t thread_id; // we declare thread_id which is of type pthread_t
printf("Before thread\n");
pthread_create(&thread_id,NULL,myThread,NULL);
pthread_join(thread_id,NULL);
printf("After threar\n");
exit(0);
}
