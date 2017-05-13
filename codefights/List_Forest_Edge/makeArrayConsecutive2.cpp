/*
Ratiorg got statues of different sizes as a present from
CodeMaster for his birthday, each statue having an non-negative
integer size. Since he likes to make things perfect,
he wants to arrange them from smallest to largest so that
each statue will be bigger than the previous one exactly by 1.
He may need some additional statues to be able to accomplish that.
Help him figure out the minimum number of additional statues needed.
*/

int makeArrayConsecutive2(std::vector<int> statues) {
	sort(statues.begin(), statues.end());
	if (statues.size() <= 1)
		return 0;
	int temp = 0;
	for (int i = 1; i<statues.size(); i++) {
		temp += statues[i] - statues[i - 1];
		temp--;
	}
	return temp;
}
