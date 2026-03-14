# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def partition(self, head, x):
        """
        :type head: Optional[ListNode]
        :type x: int
        :rtype: Optional[ListNode]
        """
        if(not head or not head.next):
            return head
        lesshead=ListNode(0)
        greaterhead=ListNode(0)
        less=lesshead
        greater=greaterhead
        curr=head
        while(curr):
            if(curr.val<x):
                less.next=curr
                less=less.next
            else:
                greater.next=curr
                greater=greater.next
            curr=curr.next
        greater.next=None
        less.next=greaterhead.next
        return lesshead.next
