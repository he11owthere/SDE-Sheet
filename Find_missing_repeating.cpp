#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {3,1,2,5,4,6,7,5};
    unordered_map<int, int> um;
    bool contains = false;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == nums.size())
            contains = true;
        um[nums[i]]++;
    }
    for(auto it: um)
    {
        if(it.second > 1)
        {
            cout<<it.first<<" ";
            nums.erase(find(nums.begin(), nums.end(), it.first));
            break;
        }
    }
    if(contains == true)
    {
        int result = nums.size() + 1;
        for(int i = 1; i <= nums.size(); i++)
        {
            result ^= nums[i-1];
            result ^= i;
        }
        cout<<result<<"\n";
    }
    else
        cout<<nums.size()+1<<"\n";
    return 0;
}