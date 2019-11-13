#include"holberton.h"
/**
 *read_textfile - read and print a file
 *@filename: file name
 *@letters: Q of letters to read and print
 *Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	int o = 0, w = 0, r = 0;
	char buffer[1];

	if (!filename)
		return (0);
	o = open(filename, 0);
	if (o == -1)
		return (0);
	r = read(o, buffer, 1);
	if (r == -1)
		return (0);
	while (i < letters && r != 0)
	{
		w = write(STDOUT_FILENO, buffer, 1);
		if (w == -1 || w != r)
			return (0);
		r = read(o, buffer, 1);
		if (r == -1)
			return (0);
		i++;
	}
	if (r == 0)
		i++;
	r = close(o);

	return (i);
}
