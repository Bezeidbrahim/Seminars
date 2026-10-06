#include "pch.h"
#include "shell_sort.h"

template <typename T>
void shellSort(std::vector<T>& arr) {
    size_t n = arr.size();
    for (size_t gap = n / 2; gap > 0; gap /= 2) {
        // ترتيب إدراج على العناصر التي تبعد gap عن بعضها
        for (size_t i = gap; i < n; ++i) {
            T key = arr[i];
            size_t j = i;
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}

template void shellSort<int>(std::vector<int>&);
template void shellSort<double>(std::vector<double>&);