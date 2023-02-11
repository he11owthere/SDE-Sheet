#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {4,3,6,2,1,1};
    int n = nums.size();
    int sum = (n*(n+1)) / 2;
    int s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
    {
        s1 += nums[i];
        s2 += nums[i] * nums[i];
    }
    int square = (n * (n+1) * ((2*n)+1))/6;
    int s = sum - s1;
    int sq = square - s2;
    int first = sq/s;
    int x = (first + s) / 2;
    int y = first - x;
    cout<<x<<" "<<y;
    return 0;
}