
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


int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int d= 0;
for(SinglyLinkedListNode *n1 = head1; n1; n1=n1->next) d++;
for(SinglyLinkedListNode *n2 = head2; n2; n2=n2->next) d--;
while(d>0){ head1=head1->next; d--;}
while(d<0){ head2=head2->next; d++;}
while(head1 != head2) {head1=head1->next; head2=head2->next;}
return head1->data;
}
