# @param {Integer} num_rows
# @return {Integer[][]}
def generate(num_rows)
    arr = [];
    
    0.upto(num_rows-1) do |row|
        col_sz = row+1
        arr[row] = Array.new(col_sz, 1)
        
        1.upto(col_sz-2) do |col|
            arr[row][col] = arr[row-1][col-1] + arr[row-1][col]
        end
    end
    
    arr
end