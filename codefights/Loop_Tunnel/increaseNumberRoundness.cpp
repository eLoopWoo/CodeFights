/*
Define an integer's roundness as the number of trailing zeroes in it.

Given an integer n, check if it's possible to increase n's
roundness by swapping some pair of its digits.
*/

bool increaseNumberRoundness(int n) {
	while (n % 10 == 0 && n != 0) {
		n /= 10;
		std::cout << n;


	}
	while (n != 0) {
		if (n % 10 == 0)
			return true;
		n /= 10;
	}
	return false;

}
