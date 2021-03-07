#include "Laba3.h"
#include <cmath>

int findFirstElement(double eps) {
	int i = 0;
	double ai;
	do {
		ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (abs(ai) <= eps)
			break;
		i++;
	} while (i <= INT_MAX);
	return i;
}