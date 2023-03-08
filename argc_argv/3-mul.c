#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - fonction
 *@argc: character 1
 *@argv: character 2
 *Return: 0
 */

	int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}

