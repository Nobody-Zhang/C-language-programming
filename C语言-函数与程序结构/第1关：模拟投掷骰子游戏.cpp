#include <bits/stdc++.h>
using namespace std;

void diceGame(int randSeed)
{
	srand(randSeed);
	int x = rand() % 6 + 1, y = rand() % 6 + 1;
	if (x + y == 7 || x + y == 11)
	{
		printf("Round 1:  Score:%d  Success!\n", x + y);
		return;
	}
	if (x + y == 2 || x + y == 3 || x + y == 12)
	{
		printf("Round 1:  Score:%d  Failed!", x + y);
		return;
	}
	printf("Round 1:  Score:%d  Continue!", x + y);
	printf("Next rounds: Score %d:Success, Score 7:Failed, others:Continue", x + y);
	for (int i = 2;; i++)
	{
		x = rand() % 6 + 1, y = rand() % 6 + 1;
		if (x + y == 7)
		{
			return;
		}
	}
}