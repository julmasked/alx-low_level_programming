#ifndef MAIN_H
#define MAIN_H

/*pinter to an int */
void reset_to_98(int *n);

/*swap values*/
void swap_int(int *a, int *b);

/*return lenght of a string*/
int _strlen(char *s);

/*print the string*/
void _puts(char *str);

/* prints a string, in reverse, followed by a new line*/
void print_rev(char *s);

/*function that reverses a string*/
void rev_string(char *s);

/*other character of a string*/
void puts2(char *str);

/*prints half of a string*/
void puts_half(char *str);

/*n elements of an array of integers*/
void print_array(int *a, int n);

/*copies the string pointed to by src*/
char *_strcpy(char *dest, char *src);

#endif
