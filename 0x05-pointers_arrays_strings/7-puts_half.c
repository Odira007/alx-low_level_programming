#include "main.h"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int oE = 0;
	int len = strlen(str);

	if (len % 2 != 0)
	{
		oE += 1;
	}
	for (i = (len + oE) / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
