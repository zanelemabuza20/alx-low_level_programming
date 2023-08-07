#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: input string
 * Return: pointer to duplicated string, NULL if fail
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i = 0;

	if (str == NULL)
	return (NULL);

	while (str[i] != '\0')
	i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	return (NULL);

	for (int r = 0; r < i; r++)
	duplicate[r] = str[r];

	duplicate[i] = '\0';

	return (duplicate);
}
