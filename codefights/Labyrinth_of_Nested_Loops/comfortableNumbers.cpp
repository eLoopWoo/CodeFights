/*
Let's say that number a feels comfortable with number
b if a ≠ b and b lies in the segment
[a - s(a), a + s(a)], where s(x) is the sum of x's digits.

How many pairs (a, b) are there, such that a < b, both
a and b lie on the segment [L, R], and each number feels comfortable
with the other?
*/

int comfortableNumbers(int L, int R) {
	// [a - sum_digits(a),a + sum_digits(a)]
	int count = 0;
	for (int a = L; a<R; a++) {
		for (int b = a + 1; b <= R; b++) {
			if ((b >= a - sum_digits(a) && b <= a + sum_digits(a)) && (a >= b - sum_digits(b) && a <= b + sum_digits(b))) {
				//cout << "a:" << a << " " << "b:" << b <<" " << "sum_digits(a):" << sum_digits(a) << endl;
				count++;
			}
		}
	}
	return count;
}


int sum_digits(int a) {
	int res = 0;
	while (a>0) {
		res += a % 10;
		a /= 10;
	}
	return res;
}
