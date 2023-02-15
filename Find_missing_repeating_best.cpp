#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

vector<int> FindMissingRepeating(vector<int>& nums)
{
    int x = 0, y = 0, xor1 = 0, n = nums.size();
    for(int i = 0; i < n; i++)
    {
        xor1 ^= nums[i];
        xor1 ^= i+1;
    }
    int set_bit = xor1 & (~(xor1) + 1);
    for(int i = 0; i < n; i++)
    {
        if(nums[i] & set_bit)
            x ^= nums[i];
        else
            y ^= nums[i];
            
        if(i+1 & set_bit)
            x ^= i+1;
        else
            y ^= i+1;
    }
    int x_count = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == x)
            x_count++;
    }
    if(x_count == 0)
        return {y,x};
    else
        return {x,y};
}

int main()
{
    vector<int> nums = {3,1,2,5,3};
    for(auto it: FindMissingRepeating(nums))
        cout<<it<<" ";
    return 0;
}