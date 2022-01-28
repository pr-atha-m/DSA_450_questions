class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        
        queue<pair<Node*,int>> q;
        vector<int> v;
        map<int,int> mp;
        
        
        if(root == NULL){
            return v;
        }
        q.push({root , 0});
        
        while(!q.empty()){
            
            auto pair = q.front();
            Node* curr = pair.first;
            int level = pair.second;
            q.pop();
            mp[level] = curr->data;
            
            if(curr->left!=NULL){
                q.push({curr->left , level-1});
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
};
