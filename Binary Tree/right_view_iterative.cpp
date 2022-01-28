class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       queue<pair<Node* , int>> q;
       
       if(root == NULL){
           return v;
       }
       
       q.push({root , 0});
       map<int,int> mp;
       
       while(!q.empty()){
           
           auto pair = q.front();
           Node* curr = pair.first;
           int level  = pair.second;
           
           q.pop();
           
           mp[level] = curr->data;
           
           if(curr->left!=NULL){
               q.push({curr->left , level+1});
           }
            
           if(curr->right!=NULL){
               q.push({curr->right , level+1});
           }
           
           
           
       }
       
       for(auto x:mp){
           v.push_back(x.second);
           
       }
       
       return v;
       
    }
