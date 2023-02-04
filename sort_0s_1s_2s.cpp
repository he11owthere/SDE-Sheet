class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int x = 0, y = 0, z = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
                x++;
            else if(a[i] == 1)
                y++;
            else 
                z++;
        }
        int j = 0;
        while(x--)
        {
            a[j] = 0;
            j++;
        }
        while(y--)
        {
            a[j] = 1;
            j++;
        }
        while(z--)
        {
            a[j] = 2;
            j++;
        }
    }
};