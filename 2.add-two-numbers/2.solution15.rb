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
    f = ListNode.new(nil)
    l = f
    
    while l1 && l2
     s = l1.val + l2.val + c
     d = s % 10
     c = s / 10
     
     l.val = d
     
     if l1.next && l2.next 
       node = ListNode.new
       l.next = node
       l = node
     end
     
     l1 = l1.next
     l2 = l2.next
    end
    
    if l1
       node = ListNode.new
       l.next = node
       l = node 
    end
    
    while l1
     s = l1.val + c
     d = s % 10
     c = s / 10

     node = ListNode.new

     l.val = d
     
     if l1.next
       node = ListNode.new
       l.next = node
       l = node
     end
             
     l1  = l1.next
    end
    
    if l2
       node = ListNode.new
       l.next = node
       l = node 
    end
    
    while l2
     s = l2.val + c
     d = s % 10
     c = s / 10
     

     node = ListNode.new

     l.val = d
     
     if l2.next
       node = ListNode.new
       l.next = node
       l = node
     end
        
     l2 = l2.next
    end
    
    if c > 0 
     node = ListNode.new

     l.next = node
     l = node
     l.val = c
    end

    f
end
