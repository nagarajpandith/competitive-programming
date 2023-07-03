# https://leetcode.com/problems/missing-number/description/

# logic: its given that numbers are consecutive and unique and only one of the numbers is missing. 
# hence we must exploit some property for numbers in range [0, n], such that we can get missing number 
# by comparing the property's value when [0, n] is fully present and when something is missing. 
# if we consider sum of n numbers, simple math formula -> n (n+1) /2. 
# therefore applying the same logic as told above, expected sum (when numbers are [0,n]) - actual sum (because of missing no.)  will give the missing value.

# pseudocode:
# calculate expected sum for range [0, n] ->  n (n+1) /2
# calculate what is the actual sum currently, when there is a missing number
# calculate difference between these two to find the missing value

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        expected = n * (n + 1) // 2
        actual = sum(nums)
        return expected - actual