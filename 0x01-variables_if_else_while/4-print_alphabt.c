#include <stdio.h>
#include <stdlib.h>

/**
 * main - NO q NO e
 *
 * Description: Print lowercase alphabets except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'q' && f != 'e')
		{
			putchar(f);
		}
	}
	putchar('\n');
	return (0);
}

