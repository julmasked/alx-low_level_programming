#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main: print alphabet
*
*Description:Prints lower and
*upper case alphabet
*
*Return: 0 for sucess
*/

int main(void)


{
char charact = 'a';

for (charact <= 'z');
{	
putchar(charact);
charact++;
}

for (charact <= 'Z')
{
putchar(charact);
charact++;
}

putchar('/n');

return (0);
}
