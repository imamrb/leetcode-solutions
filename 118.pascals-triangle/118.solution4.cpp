class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > v(numRows);
        
        
       for(int row=0; row < numRows; row++) {
           v[row].resize(row+1);
           v[row][0] = v[row][row] = 1;
               
           for(int col=1; col < row; col++) {
              v[row][col] = v[row-1][col-1] + v[row - 1][col];
           }
       }
    
      return v;
        
    }
};