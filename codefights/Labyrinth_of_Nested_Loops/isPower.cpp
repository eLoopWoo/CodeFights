//Determine if the given number is a power of some non-negative integer.

bool isPower(int n) {
	int min = sqrt(n);
	for (int i = 0; i <= min; i++) {
		for (int j = 0; j <= 15; j++) {
			if (pow(i, j) == n)
				return true;
		}
	}
	return false;
}
