void help(Node* root , vector<int> &v){
    
    if(root != NULL){
        v.push_back(root->data);
        help(root->left , v);
        help(root->right , v);
    }
    
    return;
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  help(root , v);
  return v;
}
