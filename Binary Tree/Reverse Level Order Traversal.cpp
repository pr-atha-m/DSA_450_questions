vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
  
    //if root is null, we return 
    if(root == NULL){
        return v;
    }
  
    //creating an empty queue for level order traversal.
    queue<Node*> q;
  
    //creating an empty stack 
   stack<int> s;
    
    q.push(root);
    
    
    while(!q.empty()){
      
       //storing front element of queue in stack and removing it from queue.
        Node* curr = q.front();
        q.pop();
        s.push(curr->data);
        
        //storing the right child of the parent node in queue.
        if(curr->right!=NULL){
            q.push(curr->right);
        }
      
        //storing the left child of the parent node in queue.
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        
        
        
        
    }
    
      // Now pop all items from stack one by one and store them
     while (!s.empty()) {
       v.push_back(s.top());
        s.pop();
    }
    
    
    return v;
    
}
