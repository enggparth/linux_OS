#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void forkexample()
{

	// child process because return value zero
	if(fork() == 0)
		printf("Hello from child \n");
	// parent process because retyrn value non zero
	else
		printf("Hello from parent\n");
}

int main()
{

forkexample();
return 0;

}
