# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} l1
# @param {ListNode} l2
# @return {ListNode}
def add_two_numbers(l1, l2)
    c = 0
    l = ListNode.new
    f = l
    
    loop do
     s = c  
     
    if l1
        s += l1.val 
        l1 = l1.next
     end
     
    if l2
        s += l2.val
        l2 = l2.next
     end

     d = s % 10
     c = s / 10
     l.val = d

     flag = false
     flag = true if l1 || l2 || c > 0 
    
     if flag
        l.next = ListNode.new
        l = l.next
     else 
        break;
     end
    end

    f
end
