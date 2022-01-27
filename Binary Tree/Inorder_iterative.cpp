class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        
        stack<Node*> st;
        vector<int> v;
        
        Node* curr = root;
        
        while(!st.empty() || curr!=NULL){
            
            while(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            v.push_back(curr->data);
            curr = curr->right;
            
        }
        
        return v;

    }
};
