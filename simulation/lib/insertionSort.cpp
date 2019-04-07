#ifndef INSERTION_SORT_CPP
#define INSERTION_SORT_CPP

#include <vector>

#include "insertionSort.h"

void insertionSort(std::vector<int>& v) {
	// Current index of element to be sorted
	int curIndex;

	for (curIndex = 1; curIndex < v.size(); ++curIndex) {
		// Target index in which v[curIndex] will be inserted
		int tarIndex = curIndex - 1;		

		// Current element to be sorted
		int curElement = v[curIndex];

		while (tarIndex >= 0 && v[tarIndex] > curElement) {
			v[tarIndex + 1] = v[tarIndex];
			--tarIndex;
		}

		v[tarIndex + 1] = curElement;
	}
}

#endif
