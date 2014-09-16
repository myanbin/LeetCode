#include <iostream>

double pow (double x, int n) {
	double answer = 1; int flag = 1;
	if (n < 0) {
		flag = 0; n = -n;
	}
	while (n--)
		answer *= x;
	if (flag) return answer;
	return 1.0 / answer;
}

int main () {
	std::cout << pow(5, 2) << std::endl;
	return 0;
}
