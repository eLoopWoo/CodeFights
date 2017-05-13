/*
Given two arrays of integers a and b,
obtain the array formed by the elements of a followed by
the elements of b.
*/

std::vector<int> concatenateArrays(std::vector<int> a, std::vector<int> b) {
	std::vector<int> results;
	results.reserve(a.size() + b.size());
	results.insert(results.end(), a.begin(), a.end());
	results.insert(results.end(), b.begin(), b.end());
	return results;
}
