#include "pch.h"
#include <utility>
#include "optimized_bubble_sort.h"

template <typename T>
void optimizedBubbleSort(std::vector<T>& arr) {
    size_t n = arr.size();          // حدّ الجزء الذي ما زال غير مرتب
    while (n > 1) {
        size_t lastSwap = 0;        // موضع آخر تبديل في هذه الجولة
        for (size_t j = 1; j < n; ++j) {
            if (arr[j - 1] > arr[j]) {
                std::swap(arr[j - 1], arr[j]);
                lastSwap = j;
            }
        }
        n = lastSwap;               // إن لم يحدث تبديل يصبح n = 0 فنتوقف
    }
}

template void optimizedBubbleSort<int>(std::vector<int>&);
template void optimizedBubbleSort<double>(std::vector<double>&);