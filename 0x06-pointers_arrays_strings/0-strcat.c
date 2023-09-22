#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings together
 * @dest: parameter to the function
 * @src: parameter to the function
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
