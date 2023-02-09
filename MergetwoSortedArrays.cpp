#include<iostream>
#include<vector>
#include<Algorithm>
#include<cmath>

using namespace std;

void swap(int &a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    vector<int> arr1 = {1,4,8,10}, arr2 = {2,3,9};
    int n = arr1.size(), m = arr2.size(), gap = ceil((float)(m+n)/2);
    while(gap >= 1)
    {
        int i = 0, j = gap; 
        while(j < (m + n))
        {
            if(j < n && arr1[i] > arr1[j])
                swap(arr1[i], arr1[j]);
            else if(j >= n && i < n && arr1[i] > arr2[j-n])
                swap(arr1[i], arr2[j-n]);
            else if(j >= n && i >= n && arr2[i-n] > arr2[j-n])
                swap(arr2[i-n], arr2[j-n]);
            i++; j++;
        }
        if(gap != 1)
                gap = ceil(float(gap)/2);
        else
            break;
    }
    for(int i = 0; i < n; i++)
        cout<<arr1[i]<<" ";
    cout<<"\n";
    for(int i = 0; i < m; i++)
        cout<<arr2[i]<<" ";
    return 0;
}