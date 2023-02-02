class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        if(numRows == 1)
        {
            ans.push_back(temp);
        }
        else if(numRows == 2)
        {
            ans.push_back(temp);
            temp.push_back(1);
            ans.push_back(temp);
        }
        else if(numRows >= 3)
        {
            ans.push_back(temp);
            temp.push_back(1);
            ans.push_back(temp);
            for(int i = 2; i < numRows; i++)
            {
                temp.clear();
                temp.push_back(1);
                for(int j = 1; j < ans[i-1].size(); j++)
                    temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
                temp.push_back(1);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};

