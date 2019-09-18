#include <stdio.h>
/*
 * This program count lines entered in the console 
 */
void main()
{
    int c, nl, nt, ns;
    nl = 0; /*Number of lines*/
    nt = 0; /*Number of tabs*/
    ns = 0; /*Number of spaces*/

    while((c = getchar()) != EOF)
    {
	if (c == '\n')
		++nl;
        if (c == '\t')
		++nt;
        if (c == ' ')
		++ns;
    }
    printf("\n");
    printf("New Lines: %d\n", nl);
    printf("Tabs: %d\n", nt);
    printf("Spaces: %d\n", ns);
}
