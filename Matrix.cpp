//Richest Customer Wealth
class Matrix1 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto& v : accounts) {
            ans = max(ans, accumulate(v.begin(), v.end(), 0));
        }
        return ans;
    }
};

//Largest Local Values in a Matrix
class Matrix2 {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int>(n - 2));
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                for (int x = i; x <= i + 2; x++) {
                    for (int y = j; y <= j + 2; y++) {
                        ans[i][j] = max(ans[i][j], grid[x][y]);
                    }
                }
            }
        }
        return ans;
    }
};

//Matrix Diagonal Sum
class Matrix3 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            ans += mat[i][i] + (i == j ? 0 : mat[i][j]);
        }
        return ans;
    }
};

//Delete Greatest Value in Each Row
class Matrix4 {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid) sort(row.begin(), row.end());
        int ans = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int t = 0;
            for (int i = 0; i < grid.size(); i++) {
                t = max(t, grid[i][j]);
            }
            ans += t;
        }
        return ans;
    }
};

//Flipping an Image
class Matrix5 {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            int i = 0, j = row.size() - 1;
            for (; i < j; i++, j--) {
                if (row[i] == row[j]) {
                    row[i] ^= 1;
                    row[j] ^= 1;
                }
            }
            if (i == j) {
                row[i] ^= 1;
            }
        }
        return image;
    }
};