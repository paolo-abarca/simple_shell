#include "main.h"

/**
 * _strlen - is a function that counts the characters of a text string
 * @string: is the string
 * Return: the number
 */
int _strlen(char *string)
{
	int len = 0;

	while (*string != '\0')
	{
		len++;
		string++;
	}
	return (len);
}
/**
 * _strncmp - is a function that compares 2 strings
 * @s1: is the first string
 * @s2: is the second string
 * @n: number of positions to compare
 * Return: Compared string
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n)
	{
		if (s1[i] != s2[i])
			return (-1);
		else if (s1[i] == s2[i])
			i++;
	}
	return (0);
}
/**
 * _strcat - concatenate to strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: the string concat
 */
char *_strcat(char *s1, char *s2)
{
	char *array;
	int i = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	array = malloc(sizeof(char) * (l1 + l2 + 1));
	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	array[i] = '\0';
	return (array);
}
/**
 * *_strncpy - is the functions that copies a string from string
 *@dest: destination
 *@src: source
 *@n: number
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
