#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**

*main - Entry point

*Description: Assigns a random number to the variable n each time it is
*executed and prints the last digit of n
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* Get the last digit of n */
int last = abs(n % 10);
printf("Last digit of %d is %d", n, last);
if(last > 5)
{
printf(" and is greater than 5\n");
}
else if(last == 0)
{
printf(" and is 0\n");
}
else if(last < 6 && last !=0 )
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}
