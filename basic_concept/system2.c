#include <stdlib.h>

#include <stdio.h>

int main()
{

	printf("Running ps with system \n");
	// & is used in system func to put it in the background 
	system("ps ax &");
	printf("Done.\n");
	return 0;
}
