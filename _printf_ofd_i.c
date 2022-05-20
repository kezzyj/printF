#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int index;
	int input_count = 0;
	int j = 0;
	int ar_num = 0;
	int n_rev;

	va_start(arg, format);
	

	for(index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			input_count++;
			_putchar(format[index]);
		}
		else
		{

			if ((format[index + 1]) == 'd')
			{
				ar_num = va_arg(arg, int);

				my_putchar(ar_num);

				index++;
			}
		}

	}

	va_end(arg);

}
