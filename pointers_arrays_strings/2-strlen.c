#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Write a function that returns the length of a string
 * @lenght: charact
 * @s: character
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{

	lenght++;
	s++;
	}
	return (lenght);
}
