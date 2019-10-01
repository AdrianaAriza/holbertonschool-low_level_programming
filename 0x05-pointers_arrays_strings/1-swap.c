/**
 *swap_int - swap the value of two numbers
 *@a: the pointer to the number 1
 *@b: the pointet to the number 2
 */

void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
