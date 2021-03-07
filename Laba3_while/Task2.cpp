#include "Laba3.h"
#include <cmath>

double summ2(double eps) {
	//double ai;
	//double sum = 0;
	//int i = 0;
	//do {
	//	ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
	//	sum += ai;
	//	i++;
	//} while (abs(ai) > eps);
	int i = 0;
	double ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
	double sum = ai;
	while (abs(ai) > eps) {
		i++;
		ai = pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1);
		sum += ai;
	}
	return sum;
}