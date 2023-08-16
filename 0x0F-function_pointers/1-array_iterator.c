#include "function_pointers.h"
/**
 * array_iterator - executes a function given,
 * as a parameter on each element of an array.
 *
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || size == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
(*action)(array[i]);
}
