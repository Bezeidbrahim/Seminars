#include "pch.h"
#include <utility>
#include "bubble_sort.h"

template <typename T>
void bubbleSort(std::vector<T>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        // بعد كل جولة يستقر أكبر عنصر في آخر المصفوفة،
        // فلا نحتاج إلى مقارنة آخر i عنصر
        for (size_t j = 0; j + 1 < arr.size() - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template void bubbleSort<int>(std::vector<int>&);
template void bubbleSort<double>(std::vector<double>&);