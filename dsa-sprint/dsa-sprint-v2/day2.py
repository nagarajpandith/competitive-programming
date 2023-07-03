# https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

# logic:
# taking the example of 1, 0, 1 -> we have to deduce a way to get 4, 0, 1 [then we can simply add them]
# here base is 2, hence [2 to power of something] along with [1, 0, 1] must get us 4, 0, 1
# so equation should be 2^x * 1 = 4, 2^y * 0 = 0 and so on...
# there was continuity in patterns when we consider size of linked list
# here size = 3, so 2^(3-1) * 1 = 4, 2^(3-2) * 0 = 0, 2^(3-3) * 1 = 1

# pseudocode:
# first job is to traverse the linked list and get
# a. it's values as one single array: append to an empty list in each traversal
# b. it's size: increment a count var in each traversal
# run a for loop in range of 0 to count and add it to result each time
# logic: 2 to the power of (count - j) * array element of current index
# j is a temp var for 1, 2, 3 ...

class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        count = 0
        l = []

        current = head 
        while current is not None:
            count+=1
            l.append(current.val)
            current = current.next

        ans = 0
        j = 1
        for i in range(0, count):
            ans += pow(2, count-j) * l[i]
            j+=1

        return ans