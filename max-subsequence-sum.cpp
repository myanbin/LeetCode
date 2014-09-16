#include <iostream>

/* 最大子序列和的最优算法，时间复杂度为O(N) */
int max_subsequence_sum (const int d[], int N)
{
    int this_sum, max_sum, j;
    this_sum = max_sum = 0;
    for (j = 0; j < N; j++)
    {
        this_sum += d[j];
        if (this_sum > max_sum)
            max_sum = this_sum;
        else if (this_sum < 0)
            this_sum = 0;
    }
    return max_sum;
}

int main () {
	int s[6] = { 4, -2, 10, -11, 8, 15 };
	std::cout << max_subsequence_sum(s, 6) << std::endl;
	return 0;
}