/*
You found two items in a treasure chest!
The first item weighs weight1 and is worth value1,
and the second item weighs weight2 and is worth value2.
What is the total maximum value of the items you can take with you,
assuming that your max weight capacity is maxW and you can't
come back for the items later?
*/

#include <algorithm> 
int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
	int temp = maxW;
	if (value1 >= value2) {
		if (temp - weight1 >= 0 && temp - weight1<weight2)
			return value1;
		else if (temp - weight1 >= weight2)
			return(value1 + value2);
	}
	else {
		if (temp - weight2 >= 0 && temp - weight2<weight1)
			return value2;
		else if (temp - weight2 >= weight1)
			return(value1 + value2);
		else if (temp - weight1 >= 0 && temp - weight1<weight2)
			return value1;
		else
			return 0;
	}


}
