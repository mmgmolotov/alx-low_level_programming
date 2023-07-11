#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - unction that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string
 *
 * Return: new duplicated string
 */
char *_strdup(char *str)
{
char *nstr;
unsigned int len;
unsigned int i;

len = 0;
if (str == NULL || nstr == NULL)
return (NULL);
while (str[len])
{
len++;
}
nstr = malloc(sizeof(char) * len + 1);
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
nstr[len] = '\0';
}
return (nstr);
}
