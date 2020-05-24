

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
    
    if(root==NULL){
        return;
    }

    queue<Node*> nodes;
    nodes.push(root);

    while(nodes.empty() == false){
        Node *node = nodes.front();
        cout<< node->data << " ";
        nodes.pop();
        
        if(node->left != NULL){
            nodes.push(node->left);
        }
        if(node->right != NULL){
            nodes.push(node->right);
        }

        }

    }
