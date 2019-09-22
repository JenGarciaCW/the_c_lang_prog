#include <stdio.h>
/* This program will contain :
 * detab()
 * 	Replaces tabs at the input with the correct ammount of spaces
 * 	to go to the next tabulation stop. Each tabulation stop will
 * 	be defined as a parameter.
 */

#define TAB_COL_SIZE 8 

void main()
{
	int c, i, space_count, j;
	space_count = 0;
	for( i = 1; (c = getchar()) != EOF; ++i)
	{
		if(c == '\t')
		{
			--i;
			space_count = TAB_COL_SIZE -(i % TAB_COL_SIZE) ;
			
			//printf("\n%d, %d\n",i, space_count);
			for(j = 0; j < space_count; ++j)
			{
				putchar('_');
				++i;
			}

		}
		else
		{
			space_count = 0;
			putchar(c);
		}
		if(c == '\n')
			i = 0;
	}
		



}

