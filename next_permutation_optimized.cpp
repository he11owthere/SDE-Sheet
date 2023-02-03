class Solution {
public:
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void reverse(vector<int>& nums, int x, int y)
    {
        while(x < y)
        {
            swap(nums[x], nums[y]);
            x++;
            y--;
        }
    }
    void nextPermutation(vector<int>& nums)
    {
        vector<int> temp;
        int n = nums.size(), ind1 = -1, ind2 = n-1;
        for(int i = nums.size()-2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                ind1 = i;
                break;
            }
        }
        if(ind1 != -1)
        {
            for(int i = n-2; i > ind1; i--)
            {
                if(nums[i] >= nums[i+1])
                {
                    if(nums[i+1] > nums[ind1])
                    {
                        ind2 = i+1;
                        break;
                    }
                    else if(nums[i] > nums[ind1])
                    {
                        ind2 = i;
                        break;
                    }
                }
            }
            swap(nums[ind1], nums[ind2]);
            reverse(nums, ind1 + 1, n-1);
        }
        else
        {
            reverse(nums, 0, n-1);
        }
    }  
};