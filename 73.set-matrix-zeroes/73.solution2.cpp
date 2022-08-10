class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSz = matrix.size();
        int colSz = matrix[0].size();
        bool col0 = false; // Flag to check if the 0th Column will be zeros

        for(int row=0; row<rowSz; row++){
            if(matrix[row][0] == 0) col0 = true;
            
            for(int col=1; col<colSz; col++){ // Start from col=1, since we checked the col0 above
                if(matrix[row][col] == 0){
                    // If a cell contains 0, mark the corresponding 0th row cell and 0th column cell 
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        
        // Traverse from the opposite direction and mark the 0th column cell at the end of each row update 
        // This is because we update other columns cell of the same row in against the value of the 0th column cell
        for(int r=rowSz - 1; r>=0; r--) {
            for(int c=colSz-1; c>=1; c--) {
                if(matrix[r][0] == 0 || matrix[0][c] == 0) {
                    matrix[r][c] = 0;
                }
            }
            if(col0==true) matrix[r][0] = 0;
        }
        

        return;
    }
};