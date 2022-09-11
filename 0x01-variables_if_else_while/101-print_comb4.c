#include <stdio.h>
#include <stdlib.h>

/**
 * main - Triples
 *
 * Description: Print all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 0;
	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = 0;
			while (n3 <= 9)
			{
				if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);
					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++n3;
			}
			++n2;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
