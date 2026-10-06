#include "pch.h"
#include <vector>
#include "optimized_bubble_sort.h"

TEST(OptimizedBubbleSort, SortsRegularArray) {
    std::vector<int> a = { 17, 3, 0, 12, 6, 9, 19, 1 };
    std::vector<int> expected = { 0, 1, 3, 6, 9, 12, 17, 19 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, EmptyArray) {
    std::vector<int> a = {};
    optimizedBubbleSort(a);
    EXPECT_TRUE(a.empty());
}

TEST(OptimizedBubbleSort, SingleElement) {
    std::vector<int> a = { 5 };
    std::vector<int> expected = { 5 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, AlreadySorted) {
    std::vector<int> a = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, ReverseOrder) {
    std::vector<int> a = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, DoubleType) {
    std::vector<double> a = { 3.5, -1.2, 0.0, 2.7 };
    std::vector<double> expected = { -1.2, 0.0, 2.7, 3.5 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, PartiallySorted) {
    // الجزء الأخير مرتب فعلًا، وهذه الحالة تختبر تحسين «آخر تبديل»
    std::vector<int> a = { 3, 1, 2, 4, 5, 6 };
    std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}

TEST(OptimizedBubbleSort, Variant11) {
    std::vector<int> a = { 16, 9, 5, 18, 1, 11, 7, 3 };
    std::vector<int> expected = { 1, 3, 5, 7, 9, 11, 16, 18 };
    optimizedBubbleSort(a);
    EXPECT_EQ(a, expected);
}