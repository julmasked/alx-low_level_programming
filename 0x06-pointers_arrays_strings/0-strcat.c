#include "main.h"

/**
* main - check the code 
* _strcat - concatenates two strings
* @dest: destination char
* @src: source char
* Description: concatenates src to end of dest
* Return: new char
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];
	return (dest);
}
