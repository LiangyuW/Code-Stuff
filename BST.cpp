
//Insertion

    Node * insert(Node * root, int data) {
        
        Node *newNode = new Node(data);
        
        if(root == NULL){
            return newNode;
        }
        Node *node = root;
        Node *tmp;
        while(node){
        if(data < node->data){
            tmp = node;
            node = node->left;
        } else {
            tmp = node;
            node = node->right;
            }
        }
        
        if(data < tmp->data){
            tmp->left = newNode;
        } else {
            tmp->right = newNode;
        }
        
        return root;

    }
