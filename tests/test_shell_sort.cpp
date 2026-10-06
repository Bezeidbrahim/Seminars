#include "pch.h"
#include <vector>
#include "shell_sort.h"

TEST(ShellSort, SortsRegularArray) {
    std::vector<int> a = { 17, 3, 0, 12, 6, 9, 19, 1 };
    std::vector<int> expected = { 0, 1, 3, 6, 9, 12, 17, 19 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, EmptyArray) {
    std::vector<int> a = {};
    shellSort(a);
    EXPECT_TRUE(a.empty());
}

TEST(ShellSort, SingleElement) {
    std::vector<int> a = { 5 };
    std::vector<int> expected = { 5 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, AlreadySorted) {
    std::vector<int> a = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, ReverseOrder) {
    std::vector<int> a = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, DoubleType) {
    std::vector<double> a = { 3.5, -1.2, 0.0, 2.7 };
    std::vector<double> expected = { -1.2, 0.0, 2.7, 3.5 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, Variant11) {
    std::vector<int> a = { 16, 9, 5, 18, 1, 11, 7, 3 };
    std::vector<int> expected = { 1, 3, 5, 7, 9, 11, 16, 18 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, WithDuplicates) {
    std::vector<int> a = { 4, 2, 4, 1, 2, 4 };
    std::vector<int> expected = { 1, 2, 2, 4, 4, 4 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}

TEST(ShellSort, LargerArray) {
    // مصفوفة أكبر حتى تُجرَّب عدة قيم للمسافة gap
    std::vector<int> a = { 23, 5, 17, 42, 8, 1, 99, 34, 12, 7, 56, 3, 28 };
    std::vector<int> expected = { 1, 3, 5, 7, 8, 12, 17, 23, 28, 34, 42, 56, 99 };
    shellSort(a);
    EXPECT_EQ(a, expected);
}