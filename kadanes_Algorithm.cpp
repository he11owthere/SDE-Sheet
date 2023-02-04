class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int m = nums[0], sum = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(sum < 0)
                sum = 0;
            sum += nums[i];
            m = max(m, sum);
        }
        return m;
    }
};