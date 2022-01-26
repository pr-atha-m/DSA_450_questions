class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int ans = INT_MIN;
    
    int height(Node* root){
        
        if(root == NULL){
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        
        ans = max(ans , 1+l+r);
        
        return 1 + max(l,r);
    }
    int diameter(Node* root) {
        // Your code here
        height(root);
        return ans;
    }
};
