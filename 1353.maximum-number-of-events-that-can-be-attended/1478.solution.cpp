class Solution {
public:
    typedef pair<int, int> pi;
    typedef pair<int, pi> ppi;
    typedef vector<int> vi;
    
    static bool cmp(vi &a, vi &b) {
        return a[1] == b[1] ? a[0] < b[0] : a[1] < b[1];
    }
    
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(), cmp);
        
        set<int> days;
        
        int n = events.size();
        int max_d = events[n-1][1];
        
        for(int d=1; d<=max_d; d++) {
            days.insert(d);
        }
        
        int ans = 0;
        
        for(int i=0; i<n; i++){
            int start_d = events[i][0];
            int end_d = events[i][1];
            
            auto it = days.lower_bound(start_d);
            
            if( it == days.end() || *it > end_d) continue;
            else { 
                ans++;
                days.erase(it);
            }
        }
        
        return ans;
    }
};