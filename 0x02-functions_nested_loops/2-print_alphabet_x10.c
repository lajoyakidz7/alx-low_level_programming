#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * Return:void
 */
int print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
return (0);
}
