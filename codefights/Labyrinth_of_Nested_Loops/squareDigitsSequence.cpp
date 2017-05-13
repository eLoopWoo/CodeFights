/*
Consider a sequence of numbers a0, a1, ..., an, in which an
element is equal to the sum of squared digits of the previous element.
The sequence ends once an element that has already been in the sequence
appears again.

Given the first element a0, find the length of the sequence.
*/

int squareDigitsSequence(int a0) {
	vector<int> x;
	int base = a0;
	int curr = 0;
	int count = 1;
	while (true) {
		x.push_back(a0);
		cout << a0 << " " << curr << endl;
		while (a0>0) {
			curr += pow((a0 % 10), 2);
			a0 /= 10;
		}
		a0 = curr;
		count++;
		if (a0 == base)
			return count;
		if (find(x.begin(), x.end(), a0) != x.end())
			return count;
		curr = 0;

	}
}