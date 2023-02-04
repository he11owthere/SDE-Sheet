class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN, sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum = 0;
            for(int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                m = max(sum, m);
            }
        }
        return m;
    }
};