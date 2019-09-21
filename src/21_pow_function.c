#include <stdio.h>
/* This function will show the usage of functions by implementing
 * a power function wich will perform m^n
 */
int power(int m, int n);

/* Power function test */
int main()
{
	int i;
	for(i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: power up the base by the n_th power; n>=0*/
int power(int base, int n)
{
	int i, p;
	p = 1;
	for(i = 0; i <= n; ++i)
		p = p * base;
	return p;
}
