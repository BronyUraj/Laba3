#include "Laba3.h"
#include <cmath>

double summ2(double eps) {
	int i = 0;
	double ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
	double sum = ai;
	for (i = 1; abs(ai) > eps; i++) {
		ai = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		sum += ai;
	}
	return sum;
}