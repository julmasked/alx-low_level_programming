#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Prints alphabet
*Description: Prints the alphabet in lower case
*Skip q and e
*
* Return: 0 for success
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter == 'q')
{
letter++;
}
else if (letter == 'e')
letter++;
}
else
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
