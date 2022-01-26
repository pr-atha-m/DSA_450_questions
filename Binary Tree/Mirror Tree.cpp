class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node != NULL){
            
            //calling for left subtree recursively
            mirror(node->left);
            
            // calling for right subtree recursively
            mirror(node->right);
            
            // swapping left and right childrens of the parent node
            
            Node* temp = node->left;
            node->left = node->right;
            node->right = temp;
            
        }
        
        return;
    }
};
