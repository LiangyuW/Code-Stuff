int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *node = head1;
    
vector<SinglyLinkedListNode*> nodes;
while(node != NULL){
nodes.push_back(node);
node = node->next;
}

node = head2;
while(node != NULL){
if(find(nodes.begin(), nodes.end(), node) != nodes.end()){
    return node->data;
}
node = node->next;
}

return -1;

}
