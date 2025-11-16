#pragma once
// LinearSearch.h
// Header file containing the function declaration for recursive linear search
// that returns the LAST occurrence of the target.

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>
using namespace std;

// Finds the LAST occurrence of target in the vector using recursion.
// pos_index is the current index being checked (starts at 0).
int linear_search_last(vector<int>& items, int& target, size_t pos_index);

#endif
