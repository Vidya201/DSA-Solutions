class Solution(object):
    def maximum_element(self,nums):
        n=len(nums)
        count={}
        for num in nums:
            count[num]=count.get(num,0)+1
            if count[num]>n/2:
                return num
nums=[5,6,6]
print(Solution().maximum_element(nums))            

