class Solution {
public:
    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums)
    {
        int low = 0, mid = 0, high = nums.size()-1;
        while(1)
        {
            if(mid > high)
                break;
            if(nums[mid] == 0)
                swap(nums[mid++], nums[low++]);
            else if(nums[mid] == 1)
                mid++;
            else if(nums[mid] == 2)
                swap(nums[mid], nums[high--]);
        }
    }
};