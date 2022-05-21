#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int rev(int n);
void my_putchar(int var);

int _putchar(char c)                                                            {
	return (write(1, &c, 1));
}

#endif
