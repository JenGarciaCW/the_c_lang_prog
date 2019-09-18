#include <stdio.h>
/*
 * This program copy the keyboard input to the console output
 */
void main()
{
    int c;
    while((c = getchar()) != EOF)
	; /* Do nothing while getchar is different from EOF */
    printf("%d\n", c);
}
