class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int len = intervals.size();
        int index = 0;
        vector<vector<int> > ans;
        

        while(index < len && intervals[index][1] < newInterval[0]) ans.push_back(intervals[index++]);
        
        while(index < len && intervals[index][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[index][0], newInterval[0]);
            newInterval[1] = max(intervals[index][1], newInterval[1]);
            index++;
        }
        
        ans.push_back(newInterval);
        
        while(index < len) ans.push_back(intervals[index++]);

        return ans; 
    }
};                         