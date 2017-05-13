/*
Some phone usage rate may be described as follows:

first minute of a call costs min1 cents,
each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
each minute after 10th costs min11 cents.
You have s cents on your account before the call.
What is the duration of the longest call (in minutes rounded down to the nearest integer)
you can have?
*/

int phoneCall(int min1, int min2_10, int min11, int s) {
	s -= min1;
	int min = 0;
	if (s<0)
		return min;
	min++;
	std::cout << min << " " << s << std::endl;
	for (int i = 0; i<9; i++) {
		if (s >= min2_10) {
			s -= min2_10;
			min++;
			std::cout << min << " " << s << " ";
		}
		else
			return min;
	}
	std::cout << std::endl;
	min += s / min11;
	s -= (s / min11)*min11;
	std::cout << min << " " << s << std::endl;
	return min;



}
