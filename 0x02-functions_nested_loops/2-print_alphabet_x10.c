#include "main.h"
/**
 *print_alpabet_x10 - this is the function
 *Return: 0
 */
/** this is the prototype*/
void print_alphabet_x10(void)
{
char b;
int m = 0;
while (m <= 9)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
m++;
}
}

