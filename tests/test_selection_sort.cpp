#include "pch.h"
#include <vector>
#include "selection_sort.h"

TEST(SelectionSort, SortsRegularArray) {
    std::vector<int> a = { 17, 3, 0, 12, 6, 9, 19, 1 };
    std::vector<int> expected = { 0, 1, 3, 6, 9, 12, 17, 19 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(SelectionSort, EmptyArray) {
    std::vector<int> a = {};
    selectionSort(a);
    EXPECT_TRUE(a.empty());
}

TEST(SelectionSort, SingleElement) {
    std::vector<int> a = { 5 };
    std::vector<int> expected = { 5 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(SelectionSort, AlreadySorted) {
    std::vector<int> a = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(SelectionSort, ReverseOrder) {
    std::vector<int> a = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(SelectionSort, DoubleType) {
    std::vector<double> a = { 3.5, -1.2, 0.0, 2.7 };
    std::vector<double> expected = { -1.2, 0.0, 2.7, 3.5 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(SelectionSort, Variant11) {
    std::vector<int> a = { 16, 9, 5, 18, 1, 11, 7, 3 };
    std::vector<int> expected = { 1, 3, 5, 7, 9, 11, 16, 18 };
    selectionSort(a);
    EXPECT_EQ(a, expected);
}