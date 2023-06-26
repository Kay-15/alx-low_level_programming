#include "main.h"
/**
 * _strlen - Returns the lengthof a string
 * @s: The stringbto get the length of
 * Return: The lenth of @str.
 */
int _strlen(char *s)
{
int  longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
