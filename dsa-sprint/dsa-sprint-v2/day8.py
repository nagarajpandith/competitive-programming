# https://leetcode.com/problems/linked-list-cycle/

# logic: while traversing a linked list, if we encounter a node which we already visited then it means there's a loop. we can maintain a dictionary to store nodes. traverse through linked list, and if the node already exists in dictionary return True else add it to dictionary with any value (like True). once loop completes, return False indicating it doenst have a loop.

# pseudocode:
# init a dict, start traversing linked list
# if the current node is in dict, return True
# else, add it to dict
# update current node to move to next node
# if traversal is complete, return false

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        d = {}
        current = head
        while current is not None:
            if current in d:
                return True
            d[current] = True
            current = current.next
        return False