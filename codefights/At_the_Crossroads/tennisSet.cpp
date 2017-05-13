/*
In tennis, a set is finished when one of the players
wins 6 games and the other one wins less than 5, or,
if both players win at least 5 games, until one of the players
win 7 games.

Determine if it is possible for a tennis set to be finished
with the score score1 : score2.
*/

bool tennisSet(int score1, int score2) {
	if (score1 >= 5 && score2 >= 5)
		return((score1 == 7 || score2 == 7) && (score1 + score2 <= 13));
	else
		return((score1 == 6 || score2 == 6) && ((score1 + score2) <= 11));

}
