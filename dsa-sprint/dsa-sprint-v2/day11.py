# https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

# logic: recently learnt about 2 pointer technique, applying similar logic here to find first node of cycle. we can initialise two pointers slow and fast, where slow moves 1x and fast moves 2x at a time. if they at some point meet, then there exists a cycle, then simply reset the slow pointer back to head and move both pointers by one step at a time till they meet again. the node where they meet again is the starting point of the cycle.

# pseudocode:
# init 2 pointers slow and fast to head
# while loop with terminating condition when either fast is null or fast.next is null
# assign slow with slow.next and fast with fast.next.next (2 times of slow ptr)
# if slow == fast, reinitialise slow to head
# run a while loop till they meet again
# return slow.data once met
# else return -1

class Solution:
    def findFirstNode(self, head):
        slow = head
        fast = head

        while fast and fast.next:
          slow = slow.next
          fast = fast.next.next
          if slow == fast:
            slow = head
            while slow != fast:
              slow = slow.next
              fast = fast.next
            return slow.data
        return -1 