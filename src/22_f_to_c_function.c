#include <stdio.h>
/*
 * Print Farenheigh-Celcius table for 
 * fahr = 0, 20, ... 300
 *
 */
float fahr_to_celcius(int degf);
void main()
{
    int fahr;
    printf(" °F   °C\n");	/* Print header */
    
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)	/* loop from lower limit to upper by step */
    	printf("%3d %6.1f\n", fahr, fahr_to_celcius(fahr));		/* print current fahr and celcuis values */
}

float fahr_to_celcius(int degf)
{
	int celcius;
    	celcius = 5.0 * (degf - 32.0) / 9.0;		/* convert fahr to celcius  */
	return celcius;
}
