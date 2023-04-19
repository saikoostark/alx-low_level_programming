#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - func
 *
 * @name: param
 * @f: param
 * Return: retun nothing at all
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
