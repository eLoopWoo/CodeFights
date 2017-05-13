/*
Given integers n, l and r, find the number of ways to
represent n as a sum of two integers A and B such that l ≤ A ≤ B ≤ r.
*/

#include <algorithm>
int countSumOfTwoRepresentations2(int n, int l, int r) {
	//l <= A <= B <= r
	if (l > n / 2)
		return 0;
	int c = min(n / 2 - l, r - n / 2);
	if (n % 2 == 0)
		c++;
	return c;

}
