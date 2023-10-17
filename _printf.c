#include "main.h"

/**
 * print_f -produces output according to format
 * @format: the format
 * Return: count
*/

int print_f(const char *format, ...)
{
	formate arr[]={
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_per},
		{"%d", print_int}};
		va_list val;
		int i = 0 , j , length = 0;

		va_start(val, format);
		if (format == NULL || (format[0] == '%'&& format[1] == '\0'))
			return (-1);

	again:
		while(format[i]! '\0')
		{
			j = 4;
			while (j >= 0)
			{
				if (arr[j].c[0] == format[i] && arr[j].c[1] == format[i + 1])
			{
				length += arr[j].f(val);
				i += 2;
				goto again;
			}
			j++;
			} 
	_putchar(format[i]);
	length++;
	i++;
	}
va_end(val);
return (length);
}