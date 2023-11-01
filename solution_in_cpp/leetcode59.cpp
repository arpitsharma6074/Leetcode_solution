class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int row = n;
        int col = n;
        int top = 0;
        int bottom = row - 1;
        int left = 0;
        int right = col - 1;
        int i = 1;
        int x = 0;
        while (x < n) {
            for (int j = left; j <= right; j++) {
                matrix[top][j] = i++;
            }
            top++;
            for (int k = top; k <= bottom; k++) {
                matrix[k][right] = i++;
            }
            right--;
            if (top <= bottom) {
                for (int l = right; l >= left; l--) {
                    matrix[bottom][l] = i++;
                }
                bottom--;
            }
            if (left <= right) {
                for (int m = bottom; m >= top; m--) {
                    matrix[m][left] = i++;
                }
                left++;
            }
            x++;
        }
        return matrix;
    }
};