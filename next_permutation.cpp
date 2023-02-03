class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool done = false;
        for(int x = nums.size()-2; x >= 0; x--)
        {
            if(done)
                break;
            for(int i = nums.size()-1; i >= x; i--)
            {
                if(done)
                    break;
                for(int j = i-1; j >= x; j--)
                {
                    if(nums[i] > nums[j])
                    {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        sort(nums.begin() + j + 1, nums.end());
                        done = true;
                        break;
                    }
                    
                }
            }
        }
        if(done == false)
            sort(nums.begin(), nums.end());
    }
};