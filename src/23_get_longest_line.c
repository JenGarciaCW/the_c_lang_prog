#include <stdio.h>

#define MAXLINE 1000 /* Maximum size of input line */
//#define MAXLINE 20 /* Maximum size of input line */

int get_line(char line[], int maxline);	 
void copy(char to[], char from[]);

/* Program that print longest input line */
int main()
{
	int len; /*lin lenght*/
	int max; /* max lenght to the moment */
	char line[MAXLINE]; /* input line placeholder */
	char longest[MAXLINE]; /* longest line placeholder */

	max = 0;
	while((len = get_line(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	if(max > 0)
		printf("%s\n", longest);
		printf("line_lenght: %d\n", max+1);

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

/* copy: copy a char array from -> to */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
