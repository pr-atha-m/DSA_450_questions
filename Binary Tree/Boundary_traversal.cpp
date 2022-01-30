class Solution {
public:

    void left(Node* root , vector<int> &v){
        if(root == NULL){
            return;
        }
        
        if(root->left!=NULL){
            v.push_back(root->data);
            left(root->left , v);
        }
        else if(root->right != NULL){
            v.push_back(root->data);
            left(root->right , v);
        }
        
    }
    void leaf(Node* root , vector<int> &v){
        if(root == NULL){
            return;
        }
        
        
         
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->data);
        }
         leaf(root->left , v);
       
        leaf(root->right , v);
        
    }
    void right(Node* root , vector<int> &v){
        
        if(root == NULL){
            return;
        }
        
        if(root->right != NULL){
            right(root->right , v);
            v.push_back(root->data);
           
        }
        
        else if(root->left!=NULL){
            right(root->left , v);
            v.push_back(root->data);
           
        }
        
        
    }
    vector <int> boundary(Node *root)
    {
       
        vector<int> v;
        v.push_back(root->data);
        left(root->left , v);
        leaf(root , v);
        right(root->right , v);
        return v;
        
    }
};
