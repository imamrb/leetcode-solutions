# @param {Integer} num_rows
# @return {Integer[][]}
def generate(num_rows)
    arr = [];
    
    # 0 - num_rows-1 
    num_rows.times do |row|
        colSz = row+1
        arr[row] = Array.new(colSz, 1)
        
        (1..row-1).each do |col|
            arr[row][col] = arr[row-1][col-1] + arr[row-1][col]
        end
    end
    
    arr
end