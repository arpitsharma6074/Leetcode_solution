class Solution1 {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> new_mat(matrix[0].size(), vector<int>(matrix.size() ,0));
        //int new_mat[matrix[0].size()][matrix.size()];
        int n = 0;
        for(int i = 0; i < matrix.size();i++){
            for(int j = 0; j < matrix[i].size();j++){
                new_mat[j][i] = matrix[i][j];
            }
        }
        return new_mat;
    }
};
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> new_mat(matrix[0].size(), vector<int>(matrix.size() ,0));
        for(int i = 0; i < matrix.size();i++){
            for(int j = 0; j < matrix[i].size();j++){
                new_mat[j][i] = matrix[i][j];
            }
        }
        return new_mat;
    }
};