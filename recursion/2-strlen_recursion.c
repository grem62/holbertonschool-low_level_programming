#include "main.h"

/**
 *_strlen_recursion - fonction
 *@s: character
 *Return: 0
*/

	int _strlen_recursion(char *s)
{
		if (*s == '\0')
		{
			return (0);
		}
		s++;

		return (1 + _strlen_recursion(s));

}







