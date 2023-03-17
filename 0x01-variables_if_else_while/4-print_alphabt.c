#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, except for the letters 'e'
* and 'q', followed by a new line using the putchar function
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
