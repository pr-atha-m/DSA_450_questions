class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	 vector<int> v;
    	 queue<Node*> q;
    	 
    	 
    	 if(root == NULL){
    	     return v;
    	 }
    	 
    	 stack<int> st;
    	 
    	 int ans = 1;
    	 q.push(root);
    	 
    	 while(!q.empty()){
    	   
    	   int sz = q.size();
    	   for(int i=0;i<sz;i++){
    	     
    	       Node* curr = q.front();
    	       q.pop();
    	       if(ans%2 == 0){
    	           st.push(curr->data);
    	       }
    	       else{
    	       v.push_back(curr->data);
    	       }
    	
    	        if(curr->left!=NULL){
    	             q.push(curr->left);
    	         }
    	         
    	         if(curr->right!=NULL){
    	             q.push(curr->right);
    	             
    	         }
    	     
    	   }
    	     
    	    if(ans%2 == 0){
    	        while(!st.empty()){
    	            v.push_back(st.top());
    	            st.pop();
    	        }
    	    } 
    	    
    	     ans++;
    	 }
    	 
    	 return v;
    	
    }
};
