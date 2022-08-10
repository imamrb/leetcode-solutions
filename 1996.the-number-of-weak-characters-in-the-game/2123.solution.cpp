class Solution {
public:
    bool static cmp(vector<int> &x, vector<int> &y){
      if(x[0] == y[0]) return x[1] > y[1];
      else return x[0] < y[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int len = properties.size(), cnt = 0;
        
        sort(properties.begin(), properties.end(), cmp);

        int maxSoFar = properties[len-1][1];
        
        for(int i=len-2; i >= 0; i--){
            maxSoFar = max(properties[i][1], maxSoFar);
            
            if(maxSoFar > properties[i][1]) cnt++;
        }

        return cnt;
    }
};