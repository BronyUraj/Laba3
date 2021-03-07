#include "Laba3.h"
#include <cmath>
#include <iostream>
using namespace std;

void print(int n, int k) {
	int i = 0;
	while (i <= n) {
		i++;
		if (i % k != 0) 
			continue;
		
		cout << pow(-1, i) * (i + 1.) / (pow(i, 3) - pow(i, 2) + 1) << " ";
	}
	cout << endl;
}