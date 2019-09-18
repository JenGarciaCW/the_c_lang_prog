#include <stdio.h>
/*
 * This program copy the input to the console output but only prints one space
 * whenever is repeated
 */
void main()
{
    int c, pc;
    pc = 0;
    while((c = getchar()) != EOF)
    {
        if (((c == ' ') && (pc != ' ')) || c != ' ')
			putchar(c);
	pc = c; /* Previous char is set to c */
    }
    printf("\n");
}
