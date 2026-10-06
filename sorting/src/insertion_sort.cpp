#include "pch.h"
#include "insertion_sort.h"

template <typename T>
void insertionSort(std::vector<T>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        T key = arr[i];          // العنصر الذي سندخله
        size_t j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1]; // نزيح الأكبر إلى اليمين
            --j;
        }
        arr[j] = key;            // نضع العنصر في مكانه
    }
}

// مهم جدًا: نعلن للمترجم أي أنواع نحتاج
template void insertionSort<int>(std::vector<int>&);
template void insertionSort<double>(std::vector<double>&);