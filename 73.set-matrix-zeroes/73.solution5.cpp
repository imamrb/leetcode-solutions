class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSz = matrix.size();
        int colSz = matrix[0].size();
        int rows[200] = { 0 };
        int cols[200] = { 0 };
        
        for(int row=0; row<rowSz; row++){
            for(int col=0; col<colSz; col++){
                if(matrix[row][col] == 0){
                    rows[row] = 1;
                    cols[col] = 1;
                }
            }
        }
        
        for(int r=0; r<rowSz; r++) {
            if(rows[r] == 1) {
                for(int col=0; col<colSz; col++) {
                    matrix[r][col] = 0;
                }
            }
        }
        
        for(int c=0; c<colSz; c++) {
            if(cols[c] == 1) {
                for(int row=0; row<rowSz; row++) {
                    matrix[row][c] = 0;
                }
            }
        }
        
        return;
    }
};