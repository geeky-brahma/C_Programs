#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
    double complex z = sqrt(-16);
	printf(
		"z = %.1f + %.1fi\n",
		creal(z), cimag(z));
    return 0;
}