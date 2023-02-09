class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); i++)
        {
            um[nums[i]]++;
        }
        for(auto it: um)
        {
            if(it.second > 1)
                return it.first;
        }
        return -1;
    }
};
Console
