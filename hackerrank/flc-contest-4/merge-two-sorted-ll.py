# Complete the mergeLists function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
def mergeLists(head1, head2):
        if head1 == None:
                return head2
        if head2 == None:
                return head2
        if head1.data < head2.data:
                head = head1
                head1 = head1.next
        else:
                head = head2
                head2 = head2.next

        prev = head
        while True:
                if head1 == None:
                        prev.next = head2
                        return head
                if head2 == None:
                        prev.next = head1
                        return head
                if head1.data < head2.data:
                        prev.next = head1
                        head1 = head1.next
                else:
                        prev.next = head2
                        head2 = head2.next
                prev = prev.next