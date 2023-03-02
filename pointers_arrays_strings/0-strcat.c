#include "main.h"

/**
 *_strcat - fonction
 *@ptr: character
 *@dest: character 2
 *@src: character 3
 *Return: concatened
**/

char *_strcat(char *dest, char *src)

{
	char *ptr = dest;

				while (*ptr != 0)
			{
				ptr++;
			}
				while (*src != 0)
				{
				*ptr++ = *src++;

				*ptr = 0;
				}
				return (dest);
}
