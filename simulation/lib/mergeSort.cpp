#ifndef MERGE_SORT_CPP
#define MERGE_SORT_CPP

#include <vector>

#include "mergeSort.h"

void merge(std::vector<int>& v, int left, int mid, int right) {
	std::vector vLeft(v.begin() + left, v.begin() + mid + 1);
	std::vector vRight(v.begin() + mid + 1, v.begin() + right + 1);

	int nLeft = vLeft.size(), nRight = vRight.size();
	int vIndex = left, lIndex = 0, rIndex = 0;

	while (lIndex < nLeft && rIndex < nRight) {
		v[vIndex++] = vLeft[lIndex] < vRight[rIndex] ? vLeft[lIndex++] : vRight[rIndex++];
	}

	while (lIndex < nLeft) {
		v[vIndex++] = vLeft[lIndex++];
	}
	
	while (rIndex < nRight) {
		v[vIndex++] = vRight[rIndex++];
	}
}

void mergeSort(std::vector<int>& v, int left, int right) {
	if (left < right) {
		int mid = (right + left) / 2;

		mergeSort(v, left, mid);
		mergeSort(v, mid + 1, right);

		merge(v, left, mid, right);
	}
}

void mergeSort(std::vector<int>& v) {
	mergeSort(v, 0, v.size() - 1);
}

#endif
