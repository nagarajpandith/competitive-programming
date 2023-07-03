# https://practice.geeksforgeeks.org/problems/rearrange-a-linked-list/1?page=1&difficulty[]=1&category[]=Linked%20List&sortBy=submissions

# logic: by analysing the sample inputs, we will understand that we have to readjust the next pointers of the node we already traversed to point to the current node according to if they are at odd or even position. so to point it after traversal, we need to store the node somehwre. so we can maintain "odd" and "even" vars to hold recently traversed odd and even positioned node. once we find the next odd positioned node, we have to point odd.next pointer to this currently found node. same for even position. after repointing everything, we also have to point the last odd node to first even node. we can maintain a head node for first found even node and just point the last traversed odd.next to that head.

class Solution:
    def rearrangeEvenOdd(self, head):
        current = head
        count = 0
        odd, even = None, None
        even_head = None
        while current != None:
            count+=1
            if count%2 == 0:
                if even !=None:
                    even.next = current
                else:
                    even_head = current
                even = current
            else:
                if odd != None:
                    odd.next = current
                odd = current
            current = current.next

        if odd != None:
            odd.next = even_head
        if even != None:
            even.next = None
