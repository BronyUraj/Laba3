#include "Laba3.h"
#include <cmath>

int findFirstNegativeElement(double eps) {
	int i = 0;
	double ai;
	do {
		ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (abs(ai) <= eps && ai < 0)
			return i;
		i++;
	} while (i <= INT_MAX);
}