/*
Given an integer n, find the minimal k such that

k = m! (where m! = 1 * 2 * ... * m) for some integer m;
k >= n.
In other words, find the smallest factorial which is not less than n.
*/

int leastFactorial(int n) {
	int k = 1;
	int m = 1;
	while (k<n) {
		k *= m;
		m++;
	}
	return k;
}
