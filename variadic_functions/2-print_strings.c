#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr_str, char *);
		 
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end(ptr_str);
}

int main(){
	print_strings(4, "You", "know", "nothing", "Jon Snow");
	return 0;
}
