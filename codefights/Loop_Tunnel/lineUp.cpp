/*
To prepare his students for an upcoming game,
the sports coach decides to try some new training drills.
To begin with, he lines them up and starts with the following
warm-up exercise: when the coach says 'L',
he instructs the students to turn to the left.
Alternatively, when he says 'R', they should turn to the right.
Finally, when the coach says 'A', the students should turn around.

Unfortunately some students (not all of them, but at least one)
can't tell left from right, meaning they always turn right when
they hear 'L' and left when they hear 'R'.
The coach wants to know how many times the students end up
facing the same direction.

Given the list of commands the coach has given,
count the number of such commands after which the students will be
facing the same direction.
*/

int lineUp(std::string commands) {

	int left = 0;
	int front = 1;
	int right = 2;
	int back = 3;

	int students = 1;
	int problem = 1;

	int count = 0;
	for (int i = 0; i<commands.size(); i++) {

		cout << students << "  " << problem << endl;
		switch (commands[i]) {
		case 'L':
			students--;
			problem++;
			break;
		case 'A':
			students += 2;
			students = students % 4;
			problem += 2;
			break;
		case 'R':
			students++;
			problem--;
			break;
		}
		if (students == -1)
			students = 3;
		if (problem == -1)
			problem = 3;

		students = students % 4;
		problem = problem % 4;

		if (students == problem)
			count++;

	}
	return count;

}
