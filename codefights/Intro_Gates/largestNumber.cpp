//Given an integer n, return the largest number that contains exactly n digits.

int largestNumber(int n) {
	int x = 9;
	while (n>1) {
		x *= 10;
		x += 9;
		n--;
	}
	return x;
}
