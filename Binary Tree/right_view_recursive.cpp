class Solution
{
    public:
    
    //Function to return list containing elements of right view of binary tree.
    
    void help(Node *root, vector<int> &v , int level , int *max_level){
        
        if(root == NULL){
            return;
        }
        
        if(level > *max_level){
            v.push_back(root->data);
            *max_level = level;
        }
        
        help(root->right , v , level+1 , max_level);
        help(root->left , v , level+1 , max_level);
        
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
        int max_level = 0;
        vector<int> v;
        help(root , v , 1 , &max_level); 
        return v;
       
    }
};
