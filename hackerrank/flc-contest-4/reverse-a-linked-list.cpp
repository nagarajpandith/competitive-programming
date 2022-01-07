/*
 * Complete the 'reverse' function below.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode*rHead =NULL;
    while(head != NULL){
        SinglyLinkedListNode* node = new SinglyLinkedListNode(head->data);
        node->next = rHead;
        rHead = node;
        
        head = head->next;
    }
    return rHead;
}