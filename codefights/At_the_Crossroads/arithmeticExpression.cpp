/*
Consider an arithmetic expression of the form a#b=c.
Check whether it is possible to replace # with one of
the four signs: +, -, * or / to obtain a correct expression.
*/

bool arithmeticExpression(int A, int B, int C) {
	if (A + B == C)
		return true;
	else if (A*B == C)
		return true;
	else if (A / B == C && A%B == 0)
		return true;
	else if (A - B == C)
		return true;
	else
		return false;
}
