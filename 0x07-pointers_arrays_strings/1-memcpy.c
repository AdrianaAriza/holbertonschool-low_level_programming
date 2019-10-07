/**
 *_memcpy- replace some values of the array
 *@dest: the array to replaced
 *@src: the source array
 *@n: number ot charecters to replaced
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
