#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _puts_recursion("1");
printf("%d\n", r);
r = _puts_recursion("5");
printf("%d\n", r);
r = _puts_recursion("10");
printf("%d\n", r);
r = _puts_recursion("-1024");
printf("%d\n", r);
return (0);
}
