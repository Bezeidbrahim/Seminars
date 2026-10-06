#include "pch.h"
#include <utility>
#include "shaker_sort.h"

template <typename T>
void shakerSort(std::vector<T>& arr) {
    if (arr.size() < 2) return;

    size_t left = 0;
    size_t right = arr.size() - 1;

    while (left < right) {
        // المرور من اليسار إلى اليمين: الأكبر يصعد
        size_t lastSwap = left;
        for (size_t j = left; j < right; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                lastSwap = j;
            }
        }
        right = lastSwap;          // ما بعد آخر تبديل أصبح مرتبًا
        if (left >= right) break;

        // المرور من اليمين إلى اليسار: الأصغر يهبط
        lastSwap = right;
        for (size_t j = right; j > left; --j) {
            if (arr[j - 1] > arr[j]) {
                std::swap(arr[j - 1], arr[j]);
                lastSwap = j;
            }
        }
        left = lastSwap;           // ما قبل آخر تبديل أصبح مرتبًا
    }
}

template void shakerSort<int>(std::vector<int>&);
template void shakerSort<double>(std::vector<double>&);