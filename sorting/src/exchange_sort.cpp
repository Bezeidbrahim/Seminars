#include "pch.h"
#include <utility>
#include "exchange_sort.h"

template <typename T>
void exchangeSort(std::vector<T>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[i]) {
                std::swap(arr[i], arr[j]);   // نبدّل فورًا عند وجود عنصر أصغر
            }
        }
    }
}

template void exchangeSort<int>(std::vector<int>&);
template void exchangeSort<double>(std::vector<double>&);