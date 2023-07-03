# https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=2&sortBy=submissions

# logic: problem is to find the Nth node, which is somewhat like randomly accessing nth element which linked list does not support. 
# so we can traverse the linked list once and create an array out of it, which will allow random access. 
# index will be length of array - N. if index is negative, it means it's out of bound else Nth node exists.

# pseudocode:
# initiate a list
# traverse the list from start to end while appending the data to the list
# calculate index = length (list) - N
# if index is negative, return -1. else return list [index].

def getNthFromLast(head,n):
    l = []
    current = head
    while current is not None:
        l.append(current.data)
        current = current.next

    index = len(l)-n

    if index<0:
        return -1
    return l[index]