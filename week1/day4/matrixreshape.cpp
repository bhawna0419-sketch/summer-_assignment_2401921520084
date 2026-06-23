class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int col = mat[0].size();
        if (rows * col != r * c)
            return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < rows * col; i++) {
            ans[i / c][i % c] = mat[i / col][i % col];
        }
        return ans;
    }
};