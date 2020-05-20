
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *node1 = head1;
SinglyLinkedListNode *node2 = head2;
while (node1 != node2) {
    if(node1->next){
        node1 = node1->next;
    } else {
    node1 = head2;
    }

    if(node2->next){
        node2 = node2->next;
    } else{
    node2= head1;
    }
}
return node1->data;
}
