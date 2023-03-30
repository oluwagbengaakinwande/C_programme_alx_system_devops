#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
  *array_iterator - function that executes function given as param.
  *@array: array of elements.
  *@size: size of array.
  *@action: function pointer.
  *
  *Return: void.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
