#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of intregers.
 * @a: input array
 * @n: input n elements.
 * Return: no return.
 */
void rev_string(char *s);
{
	int i = 0;
	for(; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(",");
	}
	printf("\n");
}
