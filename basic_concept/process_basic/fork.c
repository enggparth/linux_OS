#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

pid_t childPid;
childPid = fork();
switch(childPid) {
case -1:
	printf(" Fork() failed\n");
	break;
case 0:
	printf("Succesfull \n");
	printf("Child is here\n");
	break;
default:
	printf("Parent is here \n");
	break;
}
return 0;

}
