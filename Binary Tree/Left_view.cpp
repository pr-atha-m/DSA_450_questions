vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   map<int,int> mp;
   if(root == NULL){
       return v;
   }
   
   queue<pair<Node* , int>> q;
   
   q.push({root , 0});
   
   while(!q.empty()){
       auto curr1 = q.front();
       q.pop();
       
       Node* curr = curr1.first;
       int h = curr1.second;
       
       if(mp.find(h) == mp.end()){
           mp[h] = curr->data;
       }
       
       if(curr->left != NULL){
           q.push({curr->left , h+1});
       }
       
        if(curr->right != NULL){
           q.push({curr->right , h+1});
       }
       
       
       
       
   }
   
   
   for(auto x:mp){
       v.push_back(x.second);
   }
   
   
   return v;
   
}
