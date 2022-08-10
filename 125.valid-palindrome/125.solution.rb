# @param {String} s
# @return {Boolean}
def is_palindrome(s)
    s = s.gsub(/\W+|_/, '').downcase
    p = s.reverse(); 
    
    s == p
end