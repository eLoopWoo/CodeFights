/*
Reversing an array can be a tough task, 
for a novice programmer. Mary just started coding,
so she would like to start with something basic at first.
Instead of reversing the array entirely,
she wants to swap just its first and last elements.

Given an array arr, swap its first and last elements and
return the resulting array.
*/

std::vector<int> firstReverseTry(std::vector<int> arr) {
	if (arr.size() == 0)
		return vector<int>(0);
	std::swap(arr[0], arr[arr.size() - 1]);
	return arr;
}
