#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the lowercase alphabet in reverse,
* followed by a new line, using the putchar function twice.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int letter;

/* ASCII code for 'z' */
letter = 122;

while (letter >= 97) /* ASCII code for 'a' */
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);
}
