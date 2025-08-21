
"""class Solution(object):
    def contains_duplicate(self, nums):
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] == nums[j]:
                    return True
        return False

nums = [1, 2, 3, 1]
print(Solution().contains_duplicate(nums))"""
                

class Solution(object):
    def contains_duplicate(self, nums):
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False
nums = [1, 2, 3, 1]
print(Solution().contains_duplicate(nums))
                

