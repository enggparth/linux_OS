#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// Default Signal Handlers

int main()
{
	signal(SIGINT, SIG_DFL);
	while(1)
	{
		printf("hello world\n");
		sleep(1);
	}		
	return 0;
}
