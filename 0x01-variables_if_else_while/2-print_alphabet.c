#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*Description: print alphabet in lower case
*and followed by a new line
*Return: 0 for success
*/

int main(void)
{
char charact = 'a';
while (charact <= 'z')
{
putchar(charact);
charact++;

}
putchar ('\n');
return (0);
}
