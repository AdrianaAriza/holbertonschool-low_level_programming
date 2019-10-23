/**
 *print_name - print a name
 *@name: name
 *@f: print function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
