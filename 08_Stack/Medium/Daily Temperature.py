class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        l=[]
        for num in nums1:
            start_index=nums2.index(num)
            found=False
            for j in range(start_index+1,len(nums2)):
                if(nums2[j]>num):
                    l.append(nums2[j])
                    found=True
                    break
            if not found:
                l.append(-1)
        return l
