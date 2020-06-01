

void decode_huff(node * root, string s) {

string out = "";
node *k = root;

if(root->left==NULL && root->right==NULL){
    cout << out;
}

for(int i = 0; i<s.length(); i++){
    if(s[i]=='0'){
        k=k->left;
    }
    else if (s[i]=='1'){
        k=k->right;
    }
   
    if(k->left ==NULL && k->right==NULL){
        out += k->data;
        k=root;
    }
}
cout << out;
}
