#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument counts
 * @argv: array of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
(void)argv; /*ignore argv*/

	printf("argc = %d\n", argc);

	return (0);
}
