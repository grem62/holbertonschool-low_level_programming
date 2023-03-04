#include <string.h>

/**
 *_memset - fonction
 *@s: character1
 *@b: character2
 *@n: character3
 *Return: return memset
*/

char *_memset(char *s, char b, unsigned int n)
{

	return ((char *) memset(s, b, n));
}
