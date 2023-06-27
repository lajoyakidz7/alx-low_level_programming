#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
int i;
int n;
int k;

n = strlen(str);
k = (n - 1) / 2;

if (n % 2 == 0)
{
for (i = k + 1; i < n; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = k + 1; i < n; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
