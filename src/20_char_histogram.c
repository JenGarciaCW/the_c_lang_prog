#include <stdio.h>

/* This program will create an histogram with the freququencies
 * of the appearance of each character read from the input
 */
#define ASCII_OFFSET 32
#define MAX_ASCII 127
#define ARRAY_SIZE (MAX_ASCII - ASCII_OFFSET)
void main()
{

	int frequencies[ARRAY_SIZE];
	int i, c, j;
	
	/* Cleanup frequencies array */
	for(i = 0; i < ARRAY_SIZE; ++i)
		frequencies[i] = 0;

	while((c = getchar()) != EOF)
	{
		if (c > ASCII_OFFSET)
			if((c - ASCII_OFFSET) < MAX_ASCII)
				++frequencies[c - ASCII_OFFSET];
	}


	printf("\n");
	for(i = 0; i < ARRAY_SIZE; ++i)
	{
		printf("%c - ", i + ASCII_OFFSET);
		for(j = 0; j < frequencies[i]; ++j)
			printf("#");
		printf("\n");
	}




}
