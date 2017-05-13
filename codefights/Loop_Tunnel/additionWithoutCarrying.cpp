/*
A little boy is studying arithmetics.
He has just learned how to add two integers,
written one below another, column by column.
But he always forgets about the important part - carrying.

Given two integers, find the result which the little boy will get.
*/

int additionWithoutCarrying(int param1, int param2) {
	int sum = 0;
	int mul = 1;
	while (param1 != 0 || param2 != 0) {
		sum += ((param1 + param2) % 10)*mul;
		param1 /= 10;
		param2 /= 10;
		mul *= 10;

	}
	return sum;
}
