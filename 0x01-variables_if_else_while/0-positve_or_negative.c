#include <stdio.h>
#include <time.h>
/* more heades goes there */

/**
 * Entry point - level
 *
 * and some more things here
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 if( n<0 )
   {
     printf("is negative\n");
   }
 if( n=0 )
   {
     printf("is zero\n");
   }
 if( n>0 )
   {
     printf("is positve\n");
   }
}
