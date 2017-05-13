/*
We define the weakness of number x as the number of positive
integers smaller than x that have more divisors than x.

It follows that the weaker the number, the greater overall
weakness it has. For the given integer n, you need to answer two questions:

what is the weakness of the weakest numbers in the range [1, n]?
how many numbers in the range [1, n] have this weakness?
Return the answer as an array of two elements, where the first
element is the answer to the first question, and the second element
is the answer to the second question.
*/

std::vector<int> weakNumbers(int n) {
	int max = 0;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		//cout << i << " " << func(i)<<endl;
		if (func(i) == max)
			count++;
		if (func(i) > max) {
			max = func(i);
			count = 1;
		}
	}
	return vector<int>{max, count};
}
int check_divisors(int num) {
	int max = 0;
	for (int i = 2; i<num; i++) {
		if (num % i == 0)
			max++;
	}
	return max;
}
int func(int num) {
	int max = 0;
	int divs = check_divisors(num);
	for (int i = 2; i<num; i++)
		if (check_divisors(i)>divs)
			max++;
	return max;
}
