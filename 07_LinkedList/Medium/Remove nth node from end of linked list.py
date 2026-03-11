class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        """
        slow=head
        fast=head
        for i in range(n):
            fast=fast.next
        if fast is None:
            return head.next

        while fast:
            p=slow
            slow=slow.next
            fast=fast.next
        p.next=slow.next
        return head