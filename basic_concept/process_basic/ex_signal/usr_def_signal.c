#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int sig)
{

	printf("Signal Caught %d \n", sig);
/* Prg arranges for fun "Handler" to be called when we give SIGINT signal ny Ctrl+C. After the interrupt functoin handler has complete, the prg carries ON , but the signal action os restored to default. when it receives a second SIGINT signal, the program take the default action, which is to terminate program */

	signal(SIGINT,SIG_DFL);

}

int main()
{
	signal(SIGINT,handler);
	while(1)
	{
		printf("Hello world\n");
		sleep(1);
	}
	return 0;
}
	
