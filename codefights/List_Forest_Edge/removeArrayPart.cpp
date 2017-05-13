/*
Remove a part of a given array between given 0-based
indexes l and r (inclusive).
*/

std::vector<int> removeArrayPart(std::vector<int> inputArray, int l, int r) {
	std::vector<int> results;
	results.reserve(inputArray.size() - (r - l));
	results.insert(results.end(), inputArray.begin(), inputArray.begin() + l);

	results.insert(results.end(), inputArray.begin() + r + 1, inputArray.end());
	return results;
}
