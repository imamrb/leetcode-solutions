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

    while l1 || l2 || c > 0
     s = c  
     s += l1.val if l1
     s += l2.val if l2

     d = s % 10
     c = s / 10
     l.val = d
        
     l1 = l1.next if l1
     l2 = l2.next if l2
     
     if l1 || l2 || c > 0
        l.next = ListNode.new
        l = l.next
      end
    end

    f
end
