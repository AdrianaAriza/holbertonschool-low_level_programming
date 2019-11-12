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
	int o = 0, w = 0, r = 1;
	char *buffer;

	if (!filename)
		return (0);
	o = open(filename, letters);
	if (!o)
		return (0);
	while (i != letters && r != 0)
	{
		r = read(o, &buffer, 1);
		if (r == -1)
			return (0);
		if (r)
		{
			w = write(1, &buffer, 1);
			if (w == -1)
				return (0);
			i++;
		}
	}
	r = close(o);
	if (r == -1)
		return (0);
	return (i);
}
