#include "solution.h"

int Solution::numIslands(vector<vector<char>>& grid) {
    // return dfs(grid);
    return union_find(grid);
}

int Solution::dfs(vector<vector<char>>& grid) {
    int count = 0;
    int row_size = grid.size();
    if (row_size <= 0) {
        return count;
    }
    int col_size = grid[0].size();
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            if (grid[i][j] == '1') {
                dfs_marking(grid, i, j);
                ++count;
            }
        }
    }
    return count;
}

int Solution::union_find(vector<vector<char>>& grid) {
    vector<vector<int>> dis = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    if (grid.size() == 0 || grid[0].size() == 0) {
        return 0;
    }
    UnionFind uf(grid);
    int m = grid.size(), n = grid[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                for (auto d:dis) {
                    int x = i + d[0], y = j + d[1];
                    if (x < 0 || y < 0 || x >= m || y >= n || grid[x][y] != '1') {
                        continue;
                    }
                    int id1 = i * n + j, id2 = x * n + y;
                    uf.do_union(id1, id2);
                }
            }
        }
    }
    return uf.count;
}

void Solution::dfs_marking(vector<vector<char>>& grid, int i, int j) {
    int row_size = grid.size();
    int col_size = grid[0].size();
    if (i < 0 || j < 0 || i >= row_size || j >= col_size || grid[i][j] != '1') {
        return;
    }
    grid[i][j] = '0';
    dfs_marking(grid, i - 1, j);
    dfs_marking(grid, i + 1, j);
    dfs_marking(grid, i, j - 1);
    dfs_marking(grid, i, j + 1);
}