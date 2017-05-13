/*
You work in a company that prints and publishes books.
You are responsible for designing the page numbering mechanism in the printer.
You know how many digits a printer can print with the leftover ink.
Now you want to write a function to determine what the last page of the
book is that you can number given the current page and numberOfDigits left.
A page is considered numbered if it has the full number printed on it
(e.g. if we are working with page 102 but have ink only for two digits
then this page will not be considered numbered).

It's guaranteed that you can number the current page,
and that you can't number the last one in the book.
*/

int pagesNumberingWithInk(int current, int numberOfDigits) {
	while (get_digits(current) <= numberOfDigits) {
		cout << get_digits(current) << " " << current << endl;
		numberOfDigits -= get_digits(current);
		current++;
	}
	return current - 1;

}

int get_digits(int num) {
	int count = 0;
	while (num>0) {
		count++;
		num /= 10;
	}
	return count;
}