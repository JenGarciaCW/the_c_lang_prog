#include <stdio.h>
/*
 * Print Farenheigh-Celcius table for 
 * fahr = 0, 20, ... 300
 *
 */
void main()
{
    int fahr;
    float celcius;
    printf(" °F   °C\n");	/* Print header */
    
    for(fahr = 0; fahr <= 300; fahr = fahr + 20){	/* loop from lower limit to upper by step */
    	celcius = 5.0 * (fahr - 32.0) / 9.0;		/* convert fahr to celcius  */
    	printf("%3d %6.1f\n", fahr, celcius);		/* print current fahr and celcuis values */
    }
}
