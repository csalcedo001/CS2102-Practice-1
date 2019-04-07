#include <iostream>

int cycleLength(int n) {
	if (n == 1) {
		return 1;
	}
	
	return 1 + cycleLength(n % 2 ? 3 * n + 1 : n / 2);
}

using namespace std;
	
int main (void) {
	int i, j;

	while (cin >> i) {
		cin >> j;
		
		int iMin, iMax;
		
		if (i < j) {
			iMin = i;
			iMax = j;
		} else {
			iMin = j;
			iMax = i;
		}

		int max = 0;

		for (int k = iMin; k <= iMax; ++k) {
			int current = cycleLength(k);

			if (current > max) {
				max = current;
			}
		}

		cout << i << ' '<< j << ' ' << max << endl;
	}

	return 0;
}
