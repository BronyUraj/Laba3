#include "Laba3.h"
#include <cmath>

int findFirstNegativeElement(double eps) {
	double ai;
	for (int i = 0; i <= INT_MAX; i++) {
		ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (abs(ai) <= eps && ai < 0)
			return i;
	}
}