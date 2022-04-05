#include "main.h"

/**
 * array_free - release the array
 *
 * @array: contains the tokens of the text string
 */

void array_free(char **array)
{
	free(array[0]);
	free(array);
}
