#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

void merge(std::vector<int>& v, int left, int mid, int right);
void mergeSort(std::vector<int>& v, int left, int right);
void mergeSort(std::vector<int>& v);

#endif
