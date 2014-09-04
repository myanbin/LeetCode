#include <iostream>

/* 删除已排序数组中的重复元素 */
int removeDuplicates (int A[], int n) {
	if (n == 0) {
		return 0;
	}
	int index = 0;
	/* 顺序查看数组元素，如果不重复，则复制到 index 处 */
	for (int i = 1; i < n; i++) {
		if (A[i] != A[index]) {
			A[++index] = A[i];
		}
	}
	return index + 1;
}

int main () {
	int data[] = { 1, 1, 1, 2, 2, 3, 4 };
	std::cout << removeDuplicates(data, 7) << std::endl;
	return 0;
}