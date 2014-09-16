#include <iostream>

int climbStairs (int n) {
	if (n < 2) return n;
	int fn = 0,
	  fn_1 = 1,
	  fn_2 = 0;
	for (int i = 2; i <= n; i++) {
		fn = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;
	}
	return fn;
}

int main () {
	std::cout << climbStairs(8) << std::endl;
	return 0;
}
