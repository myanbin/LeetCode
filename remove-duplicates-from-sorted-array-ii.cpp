#include <iostream>

/* 允许最多两次的重复，多余则删除 */
int removeDuplicates (int A[], int n) {
	if (n <= 2) {
		return n;
	}
	int index = 1;
	/* 顺序查看数组元素，如果不重复，则复制到 index 处 */
	for (int i = 2; i < n; i++) {
		if (A[i] != A[index - 1]) {
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