#include <stdio.h>

/* This program will display the horizontal histogram of lenghts
 * of words provided at the input
 * Note: Based on a quick search on Wikipedia, the longest word in english 
 * in a major dictionary is "Pneumonoultramicroscopicsilicovolcanoconiosis" 
 * with 45 chars. The program will allow maximum 45 chars per word. 
 * */

#define MAX_LENGHT 45
#define IN 1
#define OUT 0

void main()
{
	int repetitions[MAX_LENGHT];
	int word_counter=0, i, j, c, exit=0;
	int status = OUT;

	/* Clean up the repetitions array*/
	for(i = 0; i < MAX_LENGHT; ++i)
		repetitions[i]=0;

	/* Iterate over the input string */
	while(exit == 0)
	{
		c = getchar();
		if(c == ' ' || c == '\t' || c == '\n' || c == EOF)
		{
			status = OUT;
			if(word_counter < MAX_LENGHT)
				++repetitions[word_counter];
			word_counter = 0;
			if (c == EOF)
			{
				exit = 1;
			}
		}
		else if(status == OUT)
		{
			status = IN;

		}

		if(status == IN)
			++word_counter;
		
	}
	
	printf("\n");
	for(i = 0; i < MAX_LENGHT; ++i)
	{
		printf("%02d chars", i+1);
		for(j = 0; j < repetitions[i]; ++j)
			printf("#");
		printf("\n");
	}
}
