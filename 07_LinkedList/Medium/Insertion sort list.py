class Solution(object):
    def insertionSortList(self, head):
        if not head:
            return head
        
        dummy = ListNode(0) 
        current = head
        
        while current:
            prev = dummy
            next_node = current.next
            
            while prev.next and prev.next.val < current.val:
                prev = prev.next
            
            current.next = prev.next
            prev.next = current
            
            current = next_node
        
        return dummy.next
