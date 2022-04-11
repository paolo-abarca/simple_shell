#include "main.h"

/**
 * error_printing - print error messages
 *
 * @argv: is the name of the program
 * @num: number of order
 * @array: the original command
 * Return: Always 0 (Success)
 */

void error_printing(char *argv, char num, char *array)
{
	print_string(argv, 1);
	print_string(": ", 1);
	_write(num);
	print_string(": ", 1);
	print_string(array, 1);
}
/**
 * print_string - print the error_printing strings
 *
 * @string: char string
 * @new_line: is for a line break
 * Return: void
 */
void print_string(char *string, int new_line)
{
	int i;

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
		write(STDOUT_FILENO, &string[i], 1);
	if (new_line == 0)
		write(STDOUT_FILENO, "\n", 1);
}
/**
 * _write - print the order number
 *
 * @num: is the order number
 * Return: Always 0
 */
int _write(char num)
{
	return (write(1, &num, 1));
}
