#include "main.h"

/**
 *_strlen_recursion - fonction
 *@s: character
 *Return: 0
*/

	int _strlen_recursion(char *s)
{
		int lenght = 0;

		if (s[lenght] >= 0 && s[lenght] != '\0')
		{
			lenght++;
			return (*s);
		}

		_strlen_recursion(s + 1);

		return (0);
}







