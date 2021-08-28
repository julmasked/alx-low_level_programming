#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - print digits
*Description: display single numbers os base 10 
*
*Return:  0 for success
*/
int main(void)
{
int num = 0;

while (num <= 9)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
