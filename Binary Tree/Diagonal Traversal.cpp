void help(Node *root , map<int,vector<int>> &mp , int level){
    if(root == NULL){
        return;
    }
    
    mp[level].push_back(root->data);
    help(root->left, mp , level+1);
    help(root->right , mp , level);
}

vector<int> diagonal(Node *root)
{
   // your code here
   map<int,vector<int>> mp;
   vector<int> v;
   
   help(root , mp , 0);
   
   for(auto x:mp){
       for(auto y:x.second){
           v.push_back(y);
       }
   }
   
   return v;   
}


