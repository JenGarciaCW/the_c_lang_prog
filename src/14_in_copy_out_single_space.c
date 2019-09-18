#include <stdio.h>
/*
 * This program copy the input to the console output but only prints one space
 * whenever is repeated
 */
void main()
{
    int c;
    while((c = getchar()) != EOF)
    {

        if (c == ' ')
	{
	putchar(c);
		while((c = getchar()) == ' ')
			;
	}
	putchar(c);
    }
    printf("\n");
}
