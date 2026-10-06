#include "pch.h"
#include "binary_insertion_sort.h"

template <typename T>
void binaryInsertionSort(std::vector<T>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        T key = arr[i];

        // بحث ثنائي عن مكان الإدخال داخل الجزء المرتب [0, i)
        size_t left = 0;
        size_t right = i;
        while (left < right) {
            size_t mid = left + (right - left) / 2;
            if (!(key < arr[mid])) {
                left = mid + 1;      // المكان على يمين mid
            }
            else {
                right = mid;         // المكان على يسار mid أو عنده
            }
        }

        // نزيح العناصر خطوة إلى اليمين لنفتح مكانًا
        for (size_t j = i; j > left; --j) {
            arr[j] = arr[j - 1];
        }
        arr[left] = key;
    }
}

template void binaryInsertionSort<int>(std::vector<int>&);
template void binaryInsertionSort<double>(std::vector<double>&);