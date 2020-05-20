/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

SinglyLinkedListNode *slow = head;
SinglyLinkedListNode *fast = head;


if(fast->next->next == NULL){
    return false;
}


while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast) {
        return true;
    }
}
return false;
}
