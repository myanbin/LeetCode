#include <iostream>

int reverse (int x) {
	int ret = 0;
	while (x) {
		ret = ret * 10 + x % 10;
		x = x / 10;
	}
	return ret;
}

int main () {
	std::cout << reverse(123) << std::endl;
	return 0;
}