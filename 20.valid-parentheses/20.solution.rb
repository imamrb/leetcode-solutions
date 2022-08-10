# @param {String} s
# @return {Boolean}
def is_valid(s)
    stack = []
    open_close = { '(' => ')', '[' => ']', '{' => '}'}
    
    s.each_char do |ch|
        if open_close[ch]
            stack << ch
        else 
          open = stack.pop
          return false if ch != open_close[open]
        end
    end
    
    stack.length.zero?
end
