#include <stdio.h>

#define IN 1 	/* in a word */
#define OUT 0 	/* out of a word */

/* Count lines, words and in chars */
void main()
{
	int c, nl, nw, nc, state, prev_state;
	prev_state = OUT;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
		
		if(state == IN)
		{
			putchar(c);
		}
		else if (state == OUT && prev_state == IN)
			putchar('\n');
		prev_state = state;

	}
	printf("%d %d %d\n", nl, nw, nc);
}
