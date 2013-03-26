/*
** Project Euler
** Problem 2
*/

#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0;
	int term = 1;
	int next = 1;

	while (next <= 4000000)
	{
		int tmp = next;
		next = term + next;
		term = tmp;

		if ((term % 2) == 0)
		{
			sum += term;
		}
	}

	cout << sum << endl;

	return 0;
}

