#include "main.h"


int _printf(const char *format, ...)
{
	va_list arg;
	int index = 0;
	char buffer[200] = {0};
	int j = 0;
	char * str;

	va_start(arg, format);

	while (format && format[index] != '\0')
	{

		if (format[index] == '%')
		{
			index++;
			switch(format[index])
			{
				case 'c':
					buffer[j] = (char)va_arg(arg, int);
					j++;
					break;

				case 's':
					str = va_arg(arg, char *);
					strcpy(&buffer[j], str);
					j += strlen(str);
					break;

				case '%':
					buffer[j] = (char)va_arg(arg, int);
					j++;
					break;
			}
		}

			else
			{
				buffer[j] = format[index];
				j++;
			}

			index++;
		}
	
        fwrite(buffer, j , 1, stdout);
	va_end(arg);
	return (j);
}
