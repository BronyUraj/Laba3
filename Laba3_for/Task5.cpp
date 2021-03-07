#include "Laba3.h"
#include <cmath>

int findFirstNegativeElement(double eps) {
	double ai;
	for (int i = 0; i <= INT_MAX; i++) {
		ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		if (abs(ai) <= eps && ai < 0)
			return i;
	}
}