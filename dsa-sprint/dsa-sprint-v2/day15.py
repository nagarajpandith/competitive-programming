# https://leetcode.com/problems/maximum-subarray/description/

# logic: had learnt about kadane's algo long back which is optimal over nested loops bruteforce approach. we run a for loop over each element and have a current sum and globally max sum vars as helpers. each iteration, we add current element to sum and check if it's bigger than global max sum. if yes, update max else keep it as it is.

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum = 0
        maxi = nums[0]
        for i in range(0, len(nums)):
            sum+=nums[i]
            maxi = max(maxi, sum)
            if sum<0:
                sum = 0
        return maxi