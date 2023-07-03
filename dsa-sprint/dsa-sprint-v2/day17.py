# https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?page=1&category[]=Queue&sortBy=submissions

# using sliding window approach which is optimal way for most of the subarray problems. we can hold a deque to store the indices of current window and keep sliding to next indices. each time we slide, we add the index to window, and we also remove the index that don't belong to current window. we also have to keep track of max element and have to add it to result array if we have processed enough elements in window. logic for max element is to keep checking if the current indexed element is bigger than current max element, if it is, then the current max is no more the max, pop that and add the new one. 

class Solution:
    def max_of_subarrays(self, arr, n, k):
        max_arr = []
        window = deque()

        for i in range(n):
            if window and window[0] <= i - k:
                window.popleft()

            while window and arr[window[-1]] < arr[i]:
                window.pop()
            window.append(i)

            if i >= k - 1:
                max_arr.append(arr[window[0]])

        return max_arr