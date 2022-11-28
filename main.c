#include <stdio.h>
#include <math.h>


int main() {
	double x = 166.124;
	double z = 15.839;
	double rez = 1 / x + 2 / (x * x) + z + 3 / pow(x, 3) + z * z + 4 / pow(x, 4) + pow(z, 3) + 5 / pow(x, 5) + pow(z, 4);
	printf("%lf", rez);

	return 0;
}