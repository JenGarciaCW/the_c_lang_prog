#include <stdio.h>
#define MAXLINE 1000 /* Maximum size of input line */

int max; /* max lenght to the moment */
char line[MAXLINE]; /* input line placeholder */
char longest[MAXLINE]; /* longest line placeholder */


int get_line(void);
void copy(void);

/* Program that print longest input line */
int main()
{
	int len; /*lin lenght*/
	extern int max;
	extern char longest[];

	max = 0;
	while((len = get_line()) > 0)
		if(len > max){
			max = len;
			copy();
		}
	if(max > 0)
		printf("%s\n", longest);
		printf("line_lenght: %d\n", max+1);

	return 0;

}

/* get_line: reads a line in s returns is lenght*/
int get_line(void)
{
	int c, i;
	extern char line[];

	for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	       line[i] = c;	

	if(c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;

}

/* copy: copy a char array from -> to */
void copy(void)
{
	int i;
	extern char line[], longest[];
	i = 0;
	while((longest[i] = line[i]) != '\0')
		++i;
}
