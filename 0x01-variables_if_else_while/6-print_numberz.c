#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all single digit numbers of base 10 starting from 0,
* followed by a new line without using any variable of type char.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

num = 48; /* ASCII code for '0' */

while (num <= 57) /* ASCII code for '9' */
{
putchar(num);
num++;
}

putchar('\n');

return (0);
}
