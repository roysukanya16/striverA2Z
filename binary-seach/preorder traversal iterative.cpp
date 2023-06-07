vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  stack<Node*> st;
  if(root==NULL) return ans;
  
  st.push(root);
  
  
  while(!st.empty()){
      Node* parent=st.top();
      st.pop();
      ans.push_back(parent->data);
      
      if(parent->right!=NULL) st.push(parent->right);
      if(parent->left!=NULL) st.push(parent->left);
      
  }
  
  return ans;
}
