#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int count = 0;

void merge(vector<int>& nums, int i, int mid, int j)
{
    vector<int> temp;
    int k = mid, z = i;
    while(i < mid && k <= j)
    {
        if(nums[i] <= nums[k])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[k]);
            k++;
            count += mid - i;
        }
    }
    while(i < mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while(k <= j)
    {
        temp.push_back(nums[k]);
        k++;
        count += mid - i;
    }
    for(int x = 0; x < temp.size(); x++)
    {
        nums[z] = temp[x];
        z++;
    }
}

void mergeSort(vector<int>& nums, int i, int j)
{
    if(j > i)
    {
        int mid = (i + j) / 2;
        mergeSort(nums, i, mid);
        mergeSort(nums, mid+1, j);
        merge(nums, i, mid+1, j);
    }
}

int main()
{
    vector<int> nums = {5,3,2,1,4};
    mergeSort(nums, 0, nums.size()-1);
    for(auto it: nums)
        cout<<it<<" ";
    cout<<"\n"<<count;
    return 0;
}