#include <stdio.h>
/* This program will contain :
 * entab()
 * eplaces whitespace strings with the minimum ammount of spaces
 * and tabs to obtain the same space tabbing.
 */

#define TAB_COL_SIZE 8 

void main()
{
	int c, i, space_count, j;
	space_count = 0;
	for( i = 1; (c = getchar()) != EOF; ++i)
	{
		if(c == ' ')
		{
			--i;
			++space_count; 
			if(((i + space_count) % TAB_COL_SIZE) == 0 )
			{
				putchar('\t');
				i = i + space_count ;
				space_count = 0;
			}
				
		}
		else
		{
			for(j = 0; j < space_count; j++)
			{
				putchar('_');
				++i;
			}
			space_count = 0;
			putchar(c);
		}
		if(c == '\n')
			i = 0;
	}
		



}

