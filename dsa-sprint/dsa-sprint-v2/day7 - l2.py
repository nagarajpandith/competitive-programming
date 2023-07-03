# https://leetcode.com/problems/3sum/

# level 2 - logic:
# we can hold a dictionary for storing count of elements and then run a loop for i over list elements, we can decrease count of ith element to indictae we used it. after entering i loop, our job would be basically to find the two sum -> search for two elements in the remaining part of the array that sum up to the complement of ith element (because main target is 0). so next, run an inner loop for j from i+1, decrease count of jth element, and find if complement of nums[i] + nums[j] is present in dictionary or not. if yes, form a triplet of nums[i], nums[j], complement, sort it and add it if it not already exist in final soln.

# pseudocode:
# create empty dict for holding count of elements
# store count of elements in dict
# run for loop i from 0 to n-2
# if current element is same as prev element, avoid the duplicate
# decrement count of nums[i] in dict
# run for loop j from i+1 to n-1
# decrement count of nums[j] in dict
# calculate complement = -(nums[i] + nums[j])
# if complement exists in dict and its occurence is > 0 then form a triplet with nums[i], nums[j], and the complement.
# sort triplet and if it doesnt exist in final answer already, add it
# increment count of nums[i] and nums[j] in dict

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        n = len(nums)
        d = {}

        for num in nums:
            if num in d:
                d[num] += 1
            else:
                d[num] = 1

        for i in range(n - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            d[nums[i]] -= 1

            for j in range(i + 1, n - 1):
                d[nums[j]] -= 1

                complement = -(nums[i] + nums[j])

                if complement in d and d[complement] > 0:
                    triplet = [nums[i], nums[j], complement]
                    triplet.sort()

                    if triplet not in ans:
                        ans.append(triplet)

                d[nums[j]] += 1
            d[nums[i]] += 1

        return ans
    
# passed 311/312 test cases (time limit exceeded for last long input)