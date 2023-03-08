#include "main.h"

/**
 * _puts_recursion - The function that runs this code
 * @s: The input
 * Return: 0 Always successful
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
