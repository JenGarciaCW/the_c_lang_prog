#include <stdio.h>
/*
 * Print Farenheigh-Celcius table for 
 * fahr = 0, 20, ... 300
 *
 */
void main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;   /* table lower limit */
    upper = 300; /* table upper limit */
    step = 20;   /* step size */

    printf(" °F   °C\n");	/* Print header */
    
    fahr = lower;	/* Initialize fahr in lower limit */
    while (fahr <= upper){	/* iterate while fahr is less or equal to lower */
    	celcius = 5.0 * (fahr - 32.0) / 9.0;		/* convert fahr to celcius  */
    	printf("%3.0f %6.1f\n", fahr, celcius);	/* print current fahr and celcuis values */
    	fahr = fahr + step;			/* increase fahr by step */

    }
}
