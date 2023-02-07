class Solution {
public:
    static bool compare(const vector<int> &a, const vector<int> &b) {
        return a[1] < b[1];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        int i = intervals.size()-1;
        while(i > 0)
        {
            if(intervals[i][0] <= intervals[i-1][1])
            {
                intervals[i-1][0] = min(intervals[i-1][0], intervals[i][0]);
                intervals[i-1][1] = max(intervals[i-1][1], intervals[i][1]);
                intervals.erase(intervals.begin() + i);
            }
            i--;
        }
        return intervals;
    }
};