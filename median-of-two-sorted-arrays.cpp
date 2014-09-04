#include <iostream>

int solve (int A[], int m, int B[], int n, int k) {
	if (m > n) {
		return solve(B, n, A, m, k);
	}
	int p = 0;	int q = 0;
	for (int i = 1; i < k; i++) {
		(B[q] < A[p]) ? ++q : ++p;
	}
	return (B[q] < A[p]) ? B[q] : A[p];
}

double findMedianSortedArrays (int A[], int m, int B[], int n) {
	int total = m + n;
	if (total % 2) {
		return solve(A, m, B, n, (total + 1) / 2);
	} else {
		return 0.5 * (solve(A, m, B, n, total / 2)
			        + solve(A, m, B, n, total / 2 + 1));
	}
}

int main () {
	int a[] = { 1, 3, 5, 7 };
	int b[] = { 2, 4, 6, 8 };

	std::cout << solve(a, 4, b, 4, 4) << std::endl;
	return 0;
}