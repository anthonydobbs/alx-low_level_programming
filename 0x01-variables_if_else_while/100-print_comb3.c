#include <stdio.h>
/**
 * main - print numbers from 01 to 89.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '1';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '8')
		{
			putchar(i);
			putchar(j);
			if (j == '8' && i == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '8')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}
