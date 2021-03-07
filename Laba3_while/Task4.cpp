#include "Laba3.h"
#include <cmath>

int findFirstElement(double eps) {
	int i = 0;
	double ai;
	while (i <= INT_MAX){
		ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		if (abs(ai) <= eps)
			break;
		i++;
	}
	return i;
}