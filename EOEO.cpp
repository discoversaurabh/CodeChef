#include <iostream>

using namespace std;

int main() {
	// your code goes here
	long T, ts, js, nearest2Power = 1, ans = 0;
	cin >> T;
	bool op = false;
	for (int test = 0; test < T; test++)
	{
		cin >> ts;
		ans = 0; //reset
		nearest2Power = 1;
		if (ts % 2)
			ans = (--ts) / 2;
		else
		{
			int tp = ts;
			//tp = tp >> 1;
			while ((tp & 1) == 0)
			{
				tp >>= 1;
				nearest2Power <<= 1;
			}
			nearest2Power <<= 1; //take next multiplier
			ans = ts / nearest2Power;
		}
		cout << ans << endl;
	}
	return 0;
}
