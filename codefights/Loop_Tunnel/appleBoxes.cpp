/*
You have k apple boxes full of apples. Each square box of
size m contains m × m apples.
You just noticed two interesting properties about the boxes:

The smallest box is size 1, the next one is size 2,...,
all the way up to size k.
Boxes that have an odd size contain only yellow apples.
Boxes that have an even size contain only red apples.
Your task is to calculate the difference between the number
of red apples and the number of yellow apples.
*/

int appleBoxes(int k) {
	/*
	* k boxes
	* m size box
	* m * m apples in box
	* m , m+1 ,m+2 , ... k
	* ODD yellow
	* EVEN RED
	*/
	int yellow = 0;
	int red = 0;
	for (int m = 1; m <= k; m++) {
		if (m % 2 == 0)
			red += m*m;
		else
			yellow += m*m;
	}
	return(red - yellow);
}
