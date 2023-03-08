#include "main.h"
#include <stdio.h>
/**
 *main - fonction
 *@argc: character 1
 *@argv: character 2
 *Return: 0
 */

	int main(int argc, char *argv[])
{
	int i = 1;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
