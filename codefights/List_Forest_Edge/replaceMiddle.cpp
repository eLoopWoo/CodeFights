/*
We define the middle of the array arr as follows:

if arr contains an odd number of elements,
its middle is the element whose index number is the same when
counting from the beginning of the array and from its end;
if arr contains an even number of elements,
its middle is the sum of the two elements whose index numbers when counting from the beginning and from the end of the array differ by one.
Given array arr, your task is to find its middle, and,
if it consists of two elements,
replace those elements with the value of middle.
Return the resulting array as the answer.
*/

std::vector<int> replaceMiddle(std::vector<int> arr) {
	if (arr.size() % 2 == 1)
		return arr;
	else {
		int mid = arr[arr.size() / 2] + arr[arr.size() / 2 - 1];
		vector<int> result;
		result.reserve(arr.size() - 1);
		result.insert(result.end(), arr.begin(), arr.begin() + arr.size() / 2 - 1);
		result.push_back(mid); result.insert(result.end(), arr.begin() + arr.size() / 2 + 1, arr.end());
		return result;
	}
}
