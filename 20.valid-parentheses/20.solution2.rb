# @param {String} s
# @return {Boolean}
def is_valid(s)
    stack = []
    
    s.each_char do |c|
        if !stack.empty? && stack[stack.length - 1] == opposite(c)
            stack.pop
        else
            stack << c
        end
    end
    
    stack.length == 0
end


def opposite(char)
    case char
    when ')'
        '('
    when '}'
        '{'
    when ']'
         '['
    else
        nil
    end
end