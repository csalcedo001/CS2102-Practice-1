#include <iostream>

using namespace std;

int main(void) {
	char c = cin.get();

	while (!cin.eof()) {
		if (c != '\n') {
			cout << (char) (c - 7);
		} else {
			cout << endl;
		}

		c = cin.get();
	}

	return 0;
}
