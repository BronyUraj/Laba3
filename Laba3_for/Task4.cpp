#include "Laba3.h"
#include <cmath>

int findFirstElement(double eps) {
	double ai;
	int i = 0;
	for (i = 0; i <= INT_MAX; i++) {
		ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		if (abs(ai) <= eps)
			break;
	}
	return i;
}