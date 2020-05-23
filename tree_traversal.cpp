

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
    void preOrder(Node *root) {
        std::cout << root->data << " "; 
        if(root->left){
        preOrder(root->left);
        }
        if(root->right){
        preOrder(root->right);
        }
    }

    void postOrder(Node *root) {
        if(root->left){
            postOrder(root->left);
        }
        if(root->right){
            postOrder(root->right);
        }
        cout << root->data << " ";
    }

    void inOrder(Node *root) {
        if(root->left){
            inOrder(root->left);
        }
        cout << root->data << " ";
        if(root->right){
            inOrder(root->right);
        }
    }
