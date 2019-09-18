#include <stdio.h>
/*
 * Celcius-Farenheight table for 
 * celcius = -20, -10, ... 150
 *
 */
void main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = -20;   /* table lower limit */
    upper = 150; /* table upper limit */
    step = 10;   /* step size */

    printf(" °C   °F\n");	/* Print header */
    
    celcius = lower;	/* Initialize celcius in lower limit */
    while (celcius <= upper){	/* iterate while celcius is less or equal to lower */
    	fahr = 9.0 * celcius / 5.0 + 32.0;		/* convert  celcius  to fahr*/
    	printf("%3.0f %6.1f\n", celcius, fahr);	/* print current fahr and celcuis values */
    	celcius = celcius + step;			/* increase celcius by step */

    }
}
