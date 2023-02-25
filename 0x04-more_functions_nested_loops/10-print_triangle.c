#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int sp, ro, tr;
if (size <= 0)
{
_putchar("\n");
}
else
{
for (ro = 0; ro <= (size = 1); ro++)
{
for (sp = 0; sp < (size - 1) - ro; sp++)
{
_putchar('#')
}
_putchar('\n');
}
}
}
