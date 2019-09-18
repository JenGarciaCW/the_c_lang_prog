#include <stdio.h>
/*
 * This program copy the keyboard input to the console output
 */
void main()
{
    int c;
    c = getchar();
    while(c != EOF){
	putchar(c);
    	c = getchar();
    }
}
