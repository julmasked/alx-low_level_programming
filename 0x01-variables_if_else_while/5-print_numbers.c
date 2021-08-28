#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - print digits
*Description: display single numbers
*in base 10
*Return:0 for success
*/

int main(void)
{
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}

putchar('\n');
return (0);
}

