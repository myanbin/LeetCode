#include <iostream>
#include <map>

/* 在成双成对中找出落单者 */
int singleNumber (int A[], int n) {
	std::map<int, int> map;
	for (int i = 0; i < n; i++) {
		map[ A[i] ]++;
	}
	for (std::map<int, int>::iterator it = map.begin(); it != map.end(); ++it) {
		if (it->second == 1) {
			return it->first;
		}
	}
}

int main () {
	int data[] = { 3, 5, 1, 2, 2, 3, 1 };
	std::cout << singleNumber(data, 7) << std::endl;
	return 0;
}