class Solution {
public:
  
    void f(int k, vector<int>& nums)
    {
        if(k < 0)
        {
            sort(nums.begin(), nums.end());
            return;
        }
        for(int i = nums.size()-1; i >= k; i--)
        {
            for(int j = i-1; j >= k; j--)
            {                    
                if(nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    sort(nums.begin() + j + 1, nums.end());
                    return;
                }
            }
        }
        f(k-1, nums);
    }
    void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();
        f(nums.size()-2, nums);
    }
    
};