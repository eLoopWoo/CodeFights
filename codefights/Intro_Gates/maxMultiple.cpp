/*
Given a divisor and a bound, find the largest integer N such that:

N is divisible by divisor.
N is less than or equal to bound.
N is greater than 0.
It is guaranteed that such a number exists.
*/

int maxMultiple(int divisor, int bound) {
	int temp = (bound / divisor)*divisor;
	if (temp == 0)
		return (bound - divisor);
	return temp;
}
