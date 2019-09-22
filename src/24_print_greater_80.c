#include <stdio.h>

#define MAXLINE 1000 /* Maximum size of input line */
#define THRESHOLD 80 /* Minimum lenght that will be printed */

int get_line(char line[], int maxline);	 
void copy(char to[], char from[]);

/* Program to print lines greater than 80 chars from the input */
int main()
{
	int len; /*lin lenght*/
	char line[MAXLINE]; /* input line placeholder */

	while((len = get_line(line, MAXLINE)) > 0)
		if(len > THRESHOLD){
			printf("%s\n", line);
			printf("line_lenght: %d\n", len+1);
		}

	return 0;

}

/* get_line: reads a line in s returns is lenght*/
int get_line(char s[], int lim)
{
	int c, i;

	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if(i < lim - 1)
			s[i] = c;
	if(c == '\n' && i < lim -1){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;

}

