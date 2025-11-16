// LinearSearch.cpp
// Implementation of recursive linear search for LAST occurrence.

#include "LinearSearch.h"

// Recursive linear search that returns the LAST location of target.
// This follows the same structure as the lecture code, but modified so that
// recursion explores the remainder of the list FIRST, and checks current index
// only if the later search finds nothing.
int linear_search_last(vector<int>& items, int& target, size_t pos_index) {

    // Base case: reached end of list → no occurrence
    if (pos_index == items.size()) {
        return -1;
    }

    // Recursive step: search forward first (toward end of vector)
    int result = linear_search_last(items, target, pos_index + 1);

    // If recursive call found the target later in the list, keep that result
    if (result != -1) {
        return result;
    }

    // Otherwise, check the current index
    if (items[pos_index] == target) {
        return pos_index;  // Only returned if no later occurrence exists
    }

    // Not found at this position
    return -1;
}
