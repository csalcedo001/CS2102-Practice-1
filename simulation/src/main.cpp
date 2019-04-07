#include <iostream>

#include "insertionSort.h"
#include "mergeSort.h"

using namespace std;

int main (void) {
	std::vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	mergeSort(v);

	cout << "v:";

	for (auto i : v) {
		cout << ' ' << i;
	}

	cout << endl;

	return 0;
}
