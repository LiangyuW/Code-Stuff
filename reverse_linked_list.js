
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode next;
 * }
 *
 */
function reverse(head) {
if(head.next == null) {
    return head
}
let node = head
let nextnode = node.next
while(nextnode != null) {
    let tmp = node
    node = nextnode
    nextnode = nextnode.next
    node.next = tmp
 }
head.next = null;

return node;
}


/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode next;
 *     DoublyLinkedListNode prev;
 * }
 *
 */
function reverse(head) {
if(head == null) {
    return head;
}
let node = head
let nextnode = head.next
while(nextnode != null){
    node.prev = nextnode;
    let tmp = nextnode.next;
    nextnode.next = node;
    node = nextnode;
    nextnode = tmp;
}
head.next = null;
return node;
}
