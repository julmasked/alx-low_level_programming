#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - print digits
*Description:display single numbers
*without char
*Return:  0 for success
*/
int main(void)
{
int num;

for (num = 0; num < 10; num++)

putchar((num % 10) + '0');

putchar('\n');
return (0);
}
