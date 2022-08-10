# @param {String} s
# @return {Integer}
def longest_palindrome(s)
    arr = Array.new(70, 0)
    
    s.each_char do |ch|
        arr[ch.ord - 65] += 1 
    end
    
    odd_found = false
    len = 0
    
    arr.each do |value|
       if value % 2 == 0
           len += value
       else 
          len += value - 1
          odd_found = true
       end
    end
    
    len += 1 if odd_found
    
    len
end