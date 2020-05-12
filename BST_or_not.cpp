The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
	bool checkBST(Node* root) {
        return isBST(root, -2147483648, 2147483647);
	}

    bool isBST(Node* root, int min, int max) {
        if(root == NULL){
            return true;
        }

        if(root->data <= min || root->data >= max) {
            return false;
        }
        
       return  isBST(root->left, min, root->data) && isBST(root->right, root->data, max);
    }
