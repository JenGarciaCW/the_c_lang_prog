#include <stdio.h>
/*
 * This program copy the input to the console output but replaces 
 * tab by \t
 * backspace by \b
 */
void main()
{
    int c;
    while((c = getchar()) != EOF)
    {

        if (c == '\t')
	{
		c = '\\';
		putchar(c);
		c = 't';
	}
        if (c == '\b')
	{
		c = '\\';
		putchar(c);
		c = 'b';
	}
	putchar(c);
    }
    printf("\n");
}
