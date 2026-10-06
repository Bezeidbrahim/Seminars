#include "pch.h"
#include <utility>
#include "quick_sort.h"

// sorts arr[low..high] (both inclusive); indices are signed so that j can become -1
template <typename T>
static void quickSortImpl(std::vector<T>& arr, long long low, long long high) {
    long long i = low;
    long long j = high;
    T pivot = arr[low + (high - low) / 2];   // middle element as pivot

    while (i <= j) {
        while (arr[i] < pivot) ++i;          // find an element that is too big on the left
        while (arr[j] > pivot) --j;          // find an element that is too small on the right
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    // recursively sort the two parts
    if (low < j)  quickSortImpl(arr, low, j);
    if (i < high) quickSortImpl(arr, i, high);
}

template <typename T>
void quickSort(std::vector<T>& arr) {
    if (arr.size() < 2) return;
    quickSortImpl(arr, 0, static_cast<long long>(arr.size()) - 1);
}

// explicit instantiation: required because the template is defined in the .cpp file
template void quickSort<int>(std::vector<int>&);
template void quickSort<double>(std::vector<double>&);