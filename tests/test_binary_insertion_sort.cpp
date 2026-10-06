#include "pch.h"
#include <vector>
#include "binary_insertion_sort.h"

TEST(BinaryInsertionSort, SortsRegularArray) {
    std::vector<int> a = { 17, 3, 0, 12, 6, 9, 19, 1 };
    std::vector<int> expected = { 0, 1, 3, 6, 9, 12, 17, 19 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, EmptyArray) {
    std::vector<int> a = {};
    binaryInsertionSort(a);
    EXPECT_TRUE(a.empty());
}

TEST(BinaryInsertionSort, SingleElement) {
    std::vector<int> a = { 5 };
    std::vector<int> expected = { 5 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, AlreadySorted) {
    std::vector<int> a = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, ReverseOrder) {
    std::vector<int> a = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, DoubleType) {
    std::vector<double> a = { 3.5, -1.2, 0.0, 2.7 };
    std::vector<double> expected = { -1.2, 0.0, 2.7, 3.5 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, Variant11) {
    std::vector<int> a = { 16, 9, 5, 18, 1, 11, 7, 3 };
    std::vector<int> expected = { 1, 3, 5, 7, 9, 11, 16, 18 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}

TEST(BinaryInsertionSort, WithDuplicates) {
    std::vector<int> a = { 4, 2, 4, 1, 2, 4 };
    std::vector<int> expected = { 1, 2, 2, 4, 4, 4 };
    binaryInsertionSort(a);
    EXPECT_EQ(a, expected);
}