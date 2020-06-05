int height(node *n)  
{  if (n==NULL)  
        return -1; 
    if(n->left==NULL && n->right==NULL){
        return 0;
    } 
    return n->ht;  
}  

int balanceFactor(node *n){
    if(n==NULL){
        return 0;
    }
    return height(n->left)-height(n->right);
}

node* leftRotate(node* root) {
    node* x;
    node* y;
    x = root->right;
    y = x->left;
    root->right = y;
    x->left = root;
    
    root->ht = 1+max(height(root->left), height(root->right));
    x->ht = 1+max(height(x->left), height(x->right));
    return x;
}

node* rightRotate(node* root){
    node* x;
    node* y;
    x = root->left;
    y = x->right;
    root->left = y;
    x->right = root;
    
    root->ht = 1+max(height(root->left), height(root->right));
    x->ht = 1+max(height(x->left), height(x->right));
    return x;
}

node * insert(node * root,int val)
{
	node* newnode = new node();
    newnode->val = val;
    if(root==NULL){
        root = newnode;
        return root;
    }
  
    if(val < root->val){
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    root->ht = 1+max(height(root->left), height(root->right));
 
    int balance = balanceFactor(root);
    
    if(balance>1 && val<root->left->val){
        return rightRotate(root);
    }
    
    if(balance<-1 && val>root->right->val){
        return leftRotate(root);
    }
    
    if(balance>1 && val>root->left->val) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    
    if(balance<-1 && val<root->right->val){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
   
    
return root;
}
