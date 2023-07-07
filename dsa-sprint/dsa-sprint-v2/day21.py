# https://leetcode.com/problems/contains-duplicate-ii/description/
# logic: we can maintain one hashmap where we store index:value pairs. we iterate through the list, and check if the value is already in hashmap. if it is, then check whether the difference between current index and the duplicate's index (we'll get it from hashmap as we store index:value pair) is <= k, if yes, we have found the duplicate in range, return True. in either of the cases, we need to add or update the encountered element and it's index, so that recent index is stored, otherwise cases like tc 2 will fail. abs() is not needed as we are always moving forward here.

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        d = {}

        for i, n in enumerate(nums):
            if n in d and i - d[n] <= k:
                return True
            d[n] = i

        return False
