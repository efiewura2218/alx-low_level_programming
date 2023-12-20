#include "main.h"
/**
* print_alphabet_x10 - this is to print the alphabest 10times
* Return: void here
* Description: this function prints 10x alphabets
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
