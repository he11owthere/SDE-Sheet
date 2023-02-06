class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i = 0 ; i < matrix.size(); i++)
        {
            temp.clear();
            for(int j = matrix.size()-1; j >= 0; j--)
                temp.push_back(matrix[j][i]);
            ans.push_back(temp);
        }
        matrix = ans;
    }
};