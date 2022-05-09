#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked  - allocates memory using malloc
 * @b: value of variable
 * Return: pointer.
 */


void *malloc_checked(unsigned int b)

{
		void *c;

		c = malloc(b);
		if (c == NULL)
		{
			exit(98);
			return (NULL);
		}
		return (c);
}
