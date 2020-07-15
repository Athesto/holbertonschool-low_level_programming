/**
 * print_name - print name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name)
		f(name);
}
