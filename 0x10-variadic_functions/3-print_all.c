#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list string;

	va_start(string, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(string, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(string, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(string, double));
					break;
				case 's':
					str = va_arg(string, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ",";
			i++;
		}
	}
			printf("\n");
			va_end(string);
}


