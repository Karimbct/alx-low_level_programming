#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Description: prints a string
 * On success: return the number of characters printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
