#include "main.h"

/**
 * char*_strcpy - a function that copies the string pointed to by src
 *
 * @dest: copy to
 *
 * @src: copy from
 *
 * Return: string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int x = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; x < I; x++)
	{
		dest[x] = src[x];
	}
	dest[I] = '\0';
	return (dest);
}
