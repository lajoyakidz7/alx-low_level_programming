#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of
 * Return: The length of the string
 */
int _strlen(char *s);
{
int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);
}
