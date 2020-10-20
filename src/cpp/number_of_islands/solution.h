# pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid);
private:
    int dfs(vector<vector<char>>& grid);
    int union_find(vector<vector<char>>& grid);
    void dfs_marking(vector<vector<char>>& grid, int i, int j);
};

class UnionFind {
    vector<int> parent;
    int m, n;
public:
    int count = 0;
    UnionFind(vector<vector<char>>& grid) {
        m = grid.size();
        n = m ? grid[0].size() : 0;
        parent.resize(m * n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    int id = i * n + j;
                    parent[id] = id;
                    count++;
                }
            }
        }
    }
    void do_union(int node1, int node2) {
        int find1 = do_find(node1);
        int find2 = do_find(node2);
        if (find1 == find2) {
            return;
        }
        parent[find1] = find2;
        count--;
    }
    int do_find(int node) {
        if (parent[node] == node) {
            return node;
        }
        parent[node] = do_find(parent[node]);
        return parent[node];
    }
};