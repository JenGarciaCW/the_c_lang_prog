#include <stdio.h>

/* This program is intended to count the number of each digit
 * space chars, and any other char */

void main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	for (i = 0; i < 10; ++i)
		printf("digit %d repeated %d times\n", i, ndigit[i]);
	printf("spaces repeated %d times\n", nwhite);
	printf("other repeated %d times\n", nother);


}
