#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand - RAND_MAX / 2;
last_digit = n % 10;
if( n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,last_digit);
}
if( n==0 )
{
printf("Last digit of %d is %d and is 0", n,last_digit);
}
if( n<6 && n!=0 )
{
printf("Last digit of %d and ");
}   
return (0); 
}
