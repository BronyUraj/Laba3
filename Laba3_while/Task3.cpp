#include "Laba3.h"
#include <cmath>
#include <iostream>
using namespace std;

void print(int n, int k) {
	int i = 0;
	while (i <= n) {
		i++;
		if (i % k == 0)
			continue;
		cout << pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1) << " ";
	}
	cout << endl;
}