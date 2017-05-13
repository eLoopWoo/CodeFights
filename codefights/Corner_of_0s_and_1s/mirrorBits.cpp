//Reverse the order of the bits in a given integer.

int mirrorBits(int a) {
	int res = 0;
	while (a) {
		res = res << 1;
		std::bitset<8> x(res);
		std::cout << x << endl;
		cout << endl;
		res += a & 1;
		a = a >> 1;
	}
	return res;
}
