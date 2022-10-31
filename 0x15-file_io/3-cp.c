#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * copy_file - copies the contents of one file into another
 * @filename1: name of the source file
 * @filename2: name of the destination file
 * @letters: number of letters it should read or write
 * Return: the new file
 */
ssize_t copy_file(const char *filename1, const char *filename2, size_t letters)
{
	int op, wr, op2, rd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (letters > 1024)
		return (-1);
	if (filename1 == NULL)
		return (-1);
	op = open(filename1, O_CREAT | O_RDWR, 700);
	rd = read(op, buffer, letters);
	if (op == -1 || rd == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't read from file filename1\n");
		exit(98);
	}
	op2 = open(filename2, O_RDWR | O_CREAT | O_TRUNC, 700);
	wr = write(STDOUT_FILENO, buffer, letters);
	if (op2 == -1 || wr == -1)
	{
		free(buffer);
		dprintf(2, "Error: Can't write to filename2\n");
		exit(99);
	}
	if (close(op) == -1 || close(op2) == -1)
	{
		dprintf(2, "Error: Can't close fd file descriptors\n");
		exit(100);
	}
	filename2 = filename1;

	free(buffer);
	close(op);
	close(op2);
	return (1);
}

/**
 * main - checks the code
 * @ac: argument count
 * @av: array of strings
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename1, filename2\n", av[0]);
		exit(97);
	}
	res = copy_file(av[1], av[2], 1024);
	printf("%i\n", res);
	return (0);
}
