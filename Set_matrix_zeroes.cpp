class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows, col;
        for(int i = 0; i < matrix.size(); i++)  
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    rows.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it: rows)
        {
            for(int i = 0; i < matrix[0].size(); i++)
                matrix[it][i] = 0;
        }
        cout<<"\n";
        for(auto it: col)
        {
            for(int i = 0; i < matrix.size(); i++)
                matrix[i][it] = 0;
        }

    }

};