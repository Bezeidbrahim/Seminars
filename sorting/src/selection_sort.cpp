#include "pch.h"
#include <utility>
#include "selection_sort.h"

template <typename T>
void selectionSort(std::vector<T>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        size_t minIndex = i;                    // نفترض أن الأصغر هو أول عنصر
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;                   // وجدنا أصغر منه
            }
        }
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);   // نضعه في مكانه
        }
    }
}

template void selectionSort<int>(std::vector<int>&);
template void selectionSort<double>(std::vector<double>&);