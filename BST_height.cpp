/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL) {
            return 0;
        }
        if(root->left == NULL && root->right == NULL) {
            return 0;
        }

        int left_height = height(root->left);
        int right_height = height(root->right);

        return 1+max(left_height, right_height);
    }
