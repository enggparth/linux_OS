#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Running ps with execlp \n");
	execlp("ps","ps","ax",0);
	printf("Finish the task\n");
	return 0;
}
