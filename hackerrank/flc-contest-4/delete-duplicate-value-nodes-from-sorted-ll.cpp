/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
SinglyLinkedListNode *curr = llist;
    while (curr != NULL) {
        SinglyLinkedListNode *next = curr->next;
        while (next != NULL && next->data == curr->data)
            next = next->next;
        curr->next = next;
        curr = next;
        if (next != NULL) next = next->next;
    }
    return llist;
}