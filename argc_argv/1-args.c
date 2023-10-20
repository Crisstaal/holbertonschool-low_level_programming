#include <stdio.h>

int main(int argc, char *argv[])
{
	int numArgs = argc - 1;
	
	printf("Number of arguments: %d\n", numArgs);
	
	for (int i = 1; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return(0);
}
