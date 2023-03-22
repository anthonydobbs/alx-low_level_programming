#include <stdio.h>
#include "function_pointer.h"

/*
 * array_iteration - an array that allows the pointer to iterate over functions
 * @array: array
 *@size: size of the array
 *@action: pointer to print 
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int)) 
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++) 
	{
		(*action)(array[i]);
	}
}
