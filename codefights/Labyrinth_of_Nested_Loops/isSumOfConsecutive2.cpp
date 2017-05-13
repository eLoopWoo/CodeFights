/*
Find the number of ways to express n as sum of some
(at least two) consecutive positive integers.
*/

int isSumOfConsecutive2(int n) {
	int count = 0;
	int i = n - 1;
	int j = n - 2;
	int temp = n - 1;
	while (i>1) {
		i = temp;
		j = i - 1;
		while (j >= 1) {
			cout << j << " " << i << endl;
			if (i + j == n) {
				count++;
				break;
			}
			if (i + j<n) {
				i = j + i;
				j--;
				continue;
			}
			break;
		}
		cout << "***" << count << endl;
		temp--;
	}
	return count;
}
