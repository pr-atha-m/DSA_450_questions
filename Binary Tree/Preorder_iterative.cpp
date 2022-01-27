vector <int> preorder(Node* root)
{
  // Your code here
  stack<Node*> st;
  vector<int> v;
  Node* curr = root;
  
  while(!st.empty() || curr!=NULL){
      
      while(curr!=NULL){
          v.push_back(curr->data);
          st.push(curr);
          curr = curr->left;
      }
      
      curr = st.top();
      st.pop();
      
      curr = curr->right;
      
      
  }
  
  return v;
  
  
  
}
