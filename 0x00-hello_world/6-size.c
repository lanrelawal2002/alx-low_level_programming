#include <stdio.h>
/**
 *main - entry point
 *
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
char f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an init: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long init: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long init: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}