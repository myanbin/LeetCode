#include <iostream>
#include <vector>
#include <map>

std::vector<int> twoSum (std::vector<int> &numbers, int target) {
	std::map<int, int> map;
	std::map<int, int>::iterator it;
	std::vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		if (map[ target - numbers[i] ]) {
			result.push_back( map[ target - numbers[i] ] );
			result.push_back( i + 1 );
			break;
		} else {
			map[ numbers[i] ] = i + 1;
		}
	}
	return result;
}

int main () {
	int arr[] = { 2, 7, 11, 15 };
	std::vector<int> data(arr, arr + sizeof(arr) / sizeof(int));
	
	std::vector<int> answer = twoSum(data, 9);
	for (std::vector<int>::iterator it = answer.begin(); it != answer.end(); ++it) {
		std::cout << *it << std::endl;
	}
	return 0;
}