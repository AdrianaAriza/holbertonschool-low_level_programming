/**
 *rev_string - reverse a string
 *@s: string to reverse
 *Return: void
 */

#include<stdio.h>

void rev_string(char *s)
{
	char a[10000];

	int i = 0, m = 0;

	while (s[i] != 0)
	{
		a[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		*(s + m) = a[i];
		i--;
		m++;
	}
}




