class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root , int *flag){
        
        if(root == NULL){
            return 0;
        }
        if(*flag == -1){
            return -1;
        }
        
        int l = height(root->left , flag);
        int r = height(root->right , flag);
        
        if(abs(l-r)>=2){
            *flag = -1;
            return -1;
            
        }
        
        return 1+max(l,r);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int flag = 0;
        int h = height(root , &flag);
        
        if(flag == -1){
            return false;
        }
        else{
            return true;
        }
        
    }
};
