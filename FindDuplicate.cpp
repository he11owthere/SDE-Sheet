class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int i = nums[0];
        while(1)
        {
            if(nums[i] == 0)    return i;
            int k = nums[i];
            nums[i] = 0;
            i = k;
        }
        return -1;
    }
};