class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int> mp;
        vector<int> v;
        if(root == NULL){
            return v;
        }
        
        queue<pair<Node* , int>> q;
        q.push({root , 0});
        
        
        while(!q.empty()){
            
            auto pair = q.front();
            Node* curr = pair.first;
            int level =  pair.second;
            q.pop();
            
            if(mp.find(level) == mp.end()){
                mp[level] = curr->data;
            }
            
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
