#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;                                                                                                                                             
        printf("%d is ", n);
        if(n > 0)
        {
             printf("positive\n");
        }
        else if(n == 0)
        {
             printf("zero\n");
        }
        else
        {
             printf("negative\n");
        }

        return (0);
}