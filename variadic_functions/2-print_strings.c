#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
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
		if ()
	}
	print ("\n");
	va_end(ptr_str);
}
