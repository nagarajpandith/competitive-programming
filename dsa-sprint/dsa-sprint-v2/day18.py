# https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1?page=1&category[]=Queue&sortBy=submissions

# logic: while traversing from pump to pump, the way we can find an invalid starting index is if the petrol is less than distance, in other words subtraction is negative. so at that time we can reset the start index to next pump, and start the journey again with 0 petrol. we also have to keep tracking total petrol of journey, because if that comes out negative at last, that means no valid starting index. and if the start index turns out to be >= N, it means we traversd all possible pumps but didnt get valid one. in either of these cases return -1 else return start index directly.

class Solution:
    def tour(self, lis, n):
        start = 0
        tot = 0
        curr = 0

        for i in range(n):
            petrol = lis[i][0]
            distance = lis[i][1]

            tot += petrol - distance
            curr += petrol - distance

            if curr < 0:
                start = i + 1
                curr = 0

        if tot < 0 or start >= n:
            return -1
        else:
            return start