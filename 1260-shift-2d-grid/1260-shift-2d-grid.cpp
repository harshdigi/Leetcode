class Solution {
public:
    int m, n;
    pair<int, int> shift(int i, int j, int k) {
        j+=k;
        if(j >= n) {
            i += j/n;
            j = j%n;
        }
        if(i >= m) {
            i = i%m;
        }
        return {i,j};
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        m = grid.size(), n = grid[0].size();
        vector<vector<int>> newGrid(m, vector<int>(n));
        auto [ni, nj] = shift(0, 0, k);
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                newGrid[ni][nj] = grid[i][j];
                nj++;
                if(nj == n) {
                    ni++;
                    nj = 0;
                }
                if(ni == m) {
                    ni = 0;
                }
            }
        }
        return newGrid;
    }
};