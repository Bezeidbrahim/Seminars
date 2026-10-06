#include "pch.h"
#include <vector>
#include "exchange_sort.h"

TEST(ExchangeSort, SortsRegularArray) {
    std::vector<int> a = { 17, 3, 0, 12, 6, 9, 19, 1 };
    std::vector<int> expected = { 0, 1, 3, 6, 9, 12, 17, 19 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ExchangeSort, EmptyArray) {
    std::vector<int> a = {};
    exchangeSort(a);
    EXPECT_TRUE(a.empty());
}

TEST(ExchangeSort, SingleElement) {
    std::vector<int> a = { 5 };
    std::vector<int> expected = { 5 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ExchangeSort, AlreadySorted) {
    std::vector<int> a = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ExchangeSort, ReverseOrder) {
    std::vector<int> a = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ExchangeSort, DoubleType) {
    std::vector<double> a = { 3.5, -1.2, 0.0, 2.7 };
    std::vector<double> expected = { -1.2, 0.0, 2.7, 3.5 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ExchangeSort, Variant11) {
    std::vector<int> a = { 16, 9, 5, 18, 1, 11, 7, 3 };
    std::vector<int> expected = { 1, 3, 5, 7, 9, 11, 16, 18 };
    exchangeSort(a);
    EXPECT_EQ(a, expected);
}