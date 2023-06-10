//Q---Given a binary tree, find if it is height balanced or not. 
//A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

int height(Node* root){
       if(root == NULL){
           return 0;
       }
       return 1 + max(height(root->left),height(root->right));
   }
   //Function to check whether a binary tree is balanced or not.
   bool isBalanced(Node *root)
   {
       //  Your Code here
       if(root == NULL){
           return 1;
       }
       int lh = height(root->left);
       int rh = height(root->right);
       
       return((abs(lh - rh) <= 1) && isBalanced(root->left) && isBalanced(root->right));
   }
