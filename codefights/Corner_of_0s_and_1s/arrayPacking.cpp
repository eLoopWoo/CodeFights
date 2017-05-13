/*
You are given an array of up to four non-negative integers,
each less than 256.

Your task is to pack these integers into one number M in the following way:

The first element of the array occupies the first 8 bits of M;
The second element occupies next 8 bits, and so on.
Return the obtained integer M.

Note: the phrase "first bits of M" refers to the least significant bits
of M - the right-most bits of an integer.
*/

int arrayPacking(std::vector<int> a) {
	int x1 = a[0];
	int x2 = a[1];
	int x3 = a[2];
	int x4 = a[3];
	int total = 0;
	total = a[0];
	if (a.size() >= 2) {
		x2 = x2 << 8;
		total = total | x2;
		if (a.size() >= 3) {
			x3 = x3 << 16;;
			total = total | x3;
			if (a.size() >= 4) {
				x4 = x4 << 24;
				total = total | x4;
				return total;
			}
			else
				return total;
		}
		else
			return total;
	}
	else
		return total;
}
