#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// Create global var to change it in thread
int g = 0;
// Note generally global variable is BAD idea in threading
// The function to be executed by all threads
void *mythread(void *vargp)
{

// Store the value argu by all threads
int *myid = (int *)vargp;

// Static var to obs changes
static int s =0;

// change static and global variable
++s;
++g;

// Print the argument,static and global var
printf("Thread Id: %d, Static : %d , Global: %d \n",*myid,++s,++g);
}

int main()
{

int i;
pthread_t tid;

// Create three thread
for(i=0;i<3;i++)
	pthread_create(&tid,NULL,mythread,(void *)&tid);

pthread_exit(NULL);

return 0;
}







