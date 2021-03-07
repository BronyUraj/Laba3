#include "Laba3.h"
#include <cmath>

int findFirstElement(double eps) {
	double ai;
	int i = 0;
	for (i = 0; i <= INT_MAX; i++) {
		ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (abs(ai) <= eps)
			break;
	}
	return i;
}