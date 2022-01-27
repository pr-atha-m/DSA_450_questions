class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
   
    void help(Node* root , vector<int> &v){
        
         if(root!=NULL){
             
             help(root->left , v);
             v.push_back(root->data);
             help(root->right,v);
         }
         
       
     }
    
    
    vector<int> inOrder(Node* root) {
        
         vector<int> v;
        help(root , v);
        return v;
        
        // Your code here
    }
};
