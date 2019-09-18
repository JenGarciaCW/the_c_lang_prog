#include <stdio.h>
/*
 * This program count lines entered in the console 
 */
void main()
{
    int c, nl;
    nl = 0;

    while((c = getchar()) != EOF)
	if (c == '\n')
		++nl;
    printf("%d\n", nl);
}
