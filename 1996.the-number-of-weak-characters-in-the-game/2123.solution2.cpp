class Solution {
public:
    bool static cmp(vector<int> &x, vector<int> &y){
      if(x[0] == y[0]) return x[1] > y[1];
      else return x[0] < y[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int len = properties.size(), cnt = 0;
        
        sort(properties.begin(), properties.end(), cmp);


        int maxFromRightToIndex[len];
        int maxSoFar = -1;
        
        for(int i=len-1; i >= 0; i--){
            maxSoFar = max(properties[i][1], maxSoFar);
            maxFromRightToIndex[i] = maxSoFar;
        }
        
        // for(int i=0; i < len; i++){
        //     cout<< properties[i][0] << " "<<properties[i][1]<< " " << maxFromRightToIndex[i] << endl;
        //  }

         for(int i=0; i < len; i++){
            if(maxFromRightToIndex[i] > properties[i][1]) cnt++; 
          }
        
         return cnt;
    }
};