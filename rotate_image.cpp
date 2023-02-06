class Solution {
public:
    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void reverse(vector<int>& arr)
    {
        int i = 0, j = arr.size()-1;
        while(i < j)
            swap(arr[i++], arr[j--]);
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0 ; i < matrix.size(); i++)
        {
            for(int j = i; j < matrix.size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        for(int i = 0 ; i < matrix.size(); i++)
            reverse(matrix[i]);
    }
};