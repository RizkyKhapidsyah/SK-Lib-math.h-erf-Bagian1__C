#include <stdio.h>      /* printf */
#include <math.h>       /* erf */
#include <conio.h>

int main() {
	double x, hasil;
	x = 1.0;
	hasil = erf(x);
	printf("erf (%f) = %f\n", x, hasil);
	_getch();
	return 0;
}