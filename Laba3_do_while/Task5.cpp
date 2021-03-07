#include "Laba3.h"
#include <cmath>

int findFirstNegativeElement(double eps) {
	int i = 0;
	double ai;
	do {
		ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		if (abs(ai) <= eps && ai < 0)
			return i;
		i++;
	} while (i <= INT_MAX);
}