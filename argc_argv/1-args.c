#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int numArgs = argc - 1;
	int i = 1;
	
	printf("Number of arguments: %d\n", numArgs);
	
	for (i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return(0);
}
