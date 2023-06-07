class Solution {
//using queue, 
  
  
  public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        

        if(root==NULL) return ans;

        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;++i){
                TreeNode * parent=q.front();
                q.pop();
                if(parent->left!=NULL) q.push(parent->left);
                if(parent->right!=NULL) q.push(parent->right);
                level.push_back(parent->val);
            }
            ans.push_back(level);
        }

        return ans;
    }
};
