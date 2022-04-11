#include "main.h"

/**
 * _free_double_pointer - Entry point
 * @array: double pointer
 * Return: void
 */
void array_free(char **array)
{
	unsigned int i = 0;

	if (array == NULL)
		return;

	while (array[i])
	{
		free(array[i]);
		++i;
	}

	if (array[i] == NULL)
		free(array[i]);

	free(array);
}

/**
 * _free_parent - Entry point
 *@buffer: pointer
 *@commands: double pointer
 * Return: void
 */
void parent_free(char *string, char **array)
{
	free(string);
	array_free(array);
}
