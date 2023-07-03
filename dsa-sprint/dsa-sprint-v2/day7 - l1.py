# https://leetcode.com/problems/two-sum/

# level 1 - pseudocode:
# create a dictionary to hold value : index pair
# iterate through list
# if complement (target - nums[i]) exists in dictionary:
# return the indices of complement and current element -> [d[target-nums[i]], i]
# else: it means it's new to the dictionary, so store it

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        d = {}
        for i in range(n):
            if target-nums[i] in d:
                return [d[target-nums[i]], i]
            d[nums[i]] = i