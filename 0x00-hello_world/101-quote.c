#include <stdio.h>
#include <stdlib.h>

/**
 * main - standard error
 *
 * Description: Print to standard error
 *
 * Return: 1 (Success)
 */
int main(void)
{
	char * s;

	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stderr, "%s\n", s);
	return (1);
}
