class Solution(object):
    def remove_element(self,nums,val):
        i=0
        while i<len(nums):
            if nums[i]==val:
                nums.pop(i)
            else:
                i+=1
        return len(nums)    
nums=[3,2,2,3]
val=3
print(Solution().remove_element(nums,val))