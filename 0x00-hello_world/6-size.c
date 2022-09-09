#include <stdio.h>


/**
 * main - type size
 *
 * Description: Print the sizes of data types
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
	return (0);
}
