#include "main.h"

/**
*_isupper - veriffier si un caractere est une lettre majuscule
*@c: charachter
*Return: 1 or 0
**/
	int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
