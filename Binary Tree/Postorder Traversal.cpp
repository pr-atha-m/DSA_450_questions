void help(Node *root , vector<int>&v){
    if(root!=NULL){
       help(root->left , v );
       help(root->right , v);
       v.push_back(root->data);
       
        
    }
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  help(root , v);
  return v;
}
