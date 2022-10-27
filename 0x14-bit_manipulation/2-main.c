#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * REeturn: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	return (0);
}
