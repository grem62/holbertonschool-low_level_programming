#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* _strdup(char* str) 
{
	char *copy;
	
	if (str == NULL) 
	{
        return NULL;
    	}
    
     copy = malloc(sizeof(char));

    if (copy == NULL) 
    
        return NULL;

    strcpy(copy, str);
    return copy;
}
