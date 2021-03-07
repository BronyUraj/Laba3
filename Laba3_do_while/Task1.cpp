#include "Laba3.h"
#include <cmath>
double summ(int n) {
	double sum = 0;
	int i = 0;
	do {
		sum += pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		i++;
	} while (i <= n);
	return sum;
}