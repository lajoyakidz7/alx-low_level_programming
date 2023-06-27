#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s:input string.
 * Return:no return.
 */
void rev_string(char *s)
{
int i;
int j;
char rev;
i = 0;
j = strlen(s) - 1;
while (i < j)
{
rev = s[i];
s[i] = s[j];
s[j] = rev;
i++;
j--;
}
}
