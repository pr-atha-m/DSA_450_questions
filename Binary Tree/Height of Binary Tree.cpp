class Solution{
    public:
    
    // recursive function to find height of a binary tree
    int height(struct Node* node){
        // code here 
      
        // if node is NULL , we return height as zero
        if(node == NULL){
            return 0;
        }
      
        // else we recursively call for the height of left and right
        // subtree and take maximum of two , also we add 1 to the height
        // for the current node
        return 1 + max(height(node->left) , height(node->right));
    }
};
