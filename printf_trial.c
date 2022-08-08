#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list list;
	int done, i;
	va_start(list, format);
	char *c;
	for (i = 0; i < list; i++)
	{
		c = va_arg(list, char *);
		done = write(1, &c, 2);
	}
	va_end(list);
	return (done);
}

int main(void)
{
	_printf("%c\n", 'c');
	return (0);
}
