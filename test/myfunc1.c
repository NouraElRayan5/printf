#include "main.h"

/**
 * print_char -print the charcter
 * @val: char to print 
 * Return: (1)
*/

int print_char(va_list val)
{
char c = va_arg(val, int);
_putchar(c);
return (1);    
}

/**
 * print_str - print a string
 * @val: argument
 * Return:length of string
*/

int print_str(va_list val)
{
char *str;
int i, length;
str = va_arg(val, char *);
if (str == NULL)
{
str = "(null)";
length = str-length(str);
for(i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
else
{
length = str_length(str);
for (i = 0; i< length; i++)
_putchar(str[i]);
return(length)  
}  
}

/**
 * print_int - print integer
 * @val: value to print
 * Return: i
*/

int print_int(va_list val)
{
int n = va_arg(val, int);
int number, l_dig = n % 10 , dig;
int i = 1 , exp = 1;
n = n / 10;
number = n;
if (l_dig <0)
{
_putchar('-');
number = -number;
n = -n;
l_dig = -l_dig;
i++;    
} 
if (number > 0)
{
while ((number /10)!= 0)
{
exp *= 10;
number /=10; 
}
number = n;
while (exp > 0)
{
dig = number / exp;
_putchar(dig + '0');
number -= dig * exp;
exp /= 10;
i++;
}    
}
_putchar(l_dig + '0');
return (i);
}

/**
 * print_dec - print decimal
 * @val: value to print
 * Return: i
*/

int print_dec(va_list val)
{
int n = va_arg(val, int);
int num, last_dig =  n % 10, dig;
int i = 1, exp = 1;
n = n / 10;
num = n;
if (last_dig < 0)
{
_putchar*('-');
num = -num;
n = -n;
last_dig = -last_dig;
i++;    
}
if (num > 0)
{
while((num / 10) != 0)
{
exp *=10;
num /= 10;
}
num = n;
while (exp > 0)
{
dig = num / exp;
_putchar(dig + '0');
num -= dig * exp;
exp /= 10;
i++;    
}
}
_putchar(last_dig + '0');
return (i);
}

/**
 * print_per - print %
 * Return: 1
*/

int print_per(void)
{
	_putchar('%');
	return (1);
}
