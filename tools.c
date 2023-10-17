#include "main.h"

/**
 * _putchar -wites the char 
 * @c: the charcter to print
 * Return: 1 on success
 * on ERROR -1
*/

int _putchar(char c)
{
		return (write(1, &c ,1));
}
/**
 * _abs - absoute value of an integer
 * @num: the Number
 * Return: 0
*/

int _abs(int num)
{
	if (num > 0)
		return (num);
		else if (num < 0)
		return (-num);
		else
		return (0);
}
/**
 * str_length - return length of string 
 * @s: string
 * Return: length
*/
int str_length(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
/**
 * str_lnc - str_length function for constant string
 * @s: string
 * Return: length
*/
int str_lenc(const char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++);
	return (i); 
	
}