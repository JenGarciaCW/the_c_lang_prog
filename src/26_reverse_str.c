#include <stdio.h>

#define MAXLINE 1000 /* Maximum size of input line */

int get_line(char line[], int maxline);	 
void reverse(char line[], int len); 

/* Program to remove the spaces and tabs at the end of the line, 
 * and entirely deletes the empty lines.
 */
int main()
{
	int len; /*lin lenght*/
	char line[MAXLINE]; /* input line placeholder */

	while((len = get_line(line, MAXLINE)) > 0)
	{
		printf("\n##Line Before filter:\n");
		printf("%s\n", line);
		printf("line_lenght: %d\n", len+1);
		reverse(line, len);
		printf("##Line After filter:\n");
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

void reverse(char line[], int len)
{
	len = len - 1; /* To keep end of string at the end */
	int i, ir, buf;
	for(i = 0; i < len/2; i++)
	{
		ir = len - i - 1;
		buf = line[ir];
		line[ir] = line [i];
		line[i] = buf;
	}
	    
}
