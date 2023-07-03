# https://leetcode.com/problems/wiggle-sort-ii/

# logic: looking at the examples, we can make out that each element at odd index has larger number and at even index has smaller element. so, we have to reorder such that we assign large numbers of array into even indices and rest into odd. so we need two halves of array which has the larger and smaller elements. to do that we can first sort the array, which will make the srray to have larger elements on upper half and smaller ele on bottom half. we can run 2 for loops and assign elements from these 2 halves at their right indices.

# pseudocode:
# sort the array and store it in a temp array
# run a for loop starting from odd index 1 with a step count 2, and start assigning elements at last of temp to it (upper half)
# run a similar for loop for even indices, and assign rest of temp array to it (bottom half)

class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        l = sorted(nums)

        for i in range(1, len(nums), 2):
            nums[i] = l.pop()

        for i in range(0, len(nums), 2):
            nums[i] = l.pop()