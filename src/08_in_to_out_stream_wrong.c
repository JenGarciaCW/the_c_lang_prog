#include <stdio.h>
/*
 * This program copy the keyboard input to the console output
 */
void main()
{
    int c;
    while(c = getchar() != EOF) /* missing parenthesees, result should be 0 or 1 in case EOF */
	printf("%d\n", c);
    printf("%d\n", c);
}
