# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[Optional[ListNode]]
        :rtype: Optional[List]"""
        dummy=ListNode(0)
        dummynode=dummy
        nodes=[]
        for head in lists:
            while head:
                nodes.append(head.val)
                head=head.next
        nodes.sort()
        for val in nodes:
            dummynode.next=ListNode(val)
            dummynode=dummynode.next
        return dummy.next
