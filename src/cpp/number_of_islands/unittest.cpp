#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, NumberOfIslands) {
    Solution solution;

    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'}, 
        {'1', '1', '0', '1', '0'}, 
        {'1', '1', '0', '0', '0'}, 
        {'0', '0', '0', '0', '0'}, 
    };
    EXPECT_EQ(1, solution.numIslands(grid));

    grid.clear();
    grid.push_back({'1', '1', '0', '0', '0'});
    grid.push_back({'1', '1', '0', '0', '0'});
    grid.push_back({'0', '0', '1', '0', '0'});
    grid.push_back({'0', '0', '0', '1', '1'});
    EXPECT_EQ(3, solution.numIslands(grid));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}