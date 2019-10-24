#include<stdio.h>
#include"3-calc.h"
/**
 *get_op_func - select the operation
 *@s: string with the symbol
 *Return: pointer to a function selected
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && ops[i].f)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
