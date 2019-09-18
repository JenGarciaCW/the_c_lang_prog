#include <stdio.h>
/*
 * This program copy the keyboard input to the console output
 */
void main()
{
    long nc = 0;
    while(getchar() != EOF)
	nc++; /* Do nothing while getchar is different from EOF */
    printf("%ld\n", nc);
}
