#include "main.h"

/**
 * return lenght of a string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}	
