int level_visited = 0;

void help(Node* root , vector<int> &v , int level ){
    if(root == NULL){
        return;
    }
    if(level > level_visited){
        v.push_back(root->data);
        level_visited = level;
    }    
    help(root->left , v , level+1);
    help(root->right ,v , level+1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   level_visited = 0;
   vector<int> v;
  
   help(root , v , 1 );
   return v;
}
