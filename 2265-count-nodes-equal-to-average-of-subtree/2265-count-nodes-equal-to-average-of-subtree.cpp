/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode* check(TreeNode* root,int &sum,int &count)
   {
    if(root==NULL)
    {
        return NULL;
    }
    sum+=root->val;
    count++;
    root->left=check(root->left,sum,count);
    root->right=check(root->right,sum,count);
    return root;


   }
   


    void preorder(TreeNode* root,int &ans )//,int sum,int count)
    {
        int sum=0;
        int count=0;
        if(root==NULL)
        {
        //    count<<sum/count;
            return;
        }
        check(root,sum,count);
        if(count>0 && sum/count==root->val)
        {
            ans++;

        }
     
        preorder(root->left,ans);
      
        preorder(root->right,ans);
        
    }
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        preorder(root,ans);
        return ans;


        
    }
};