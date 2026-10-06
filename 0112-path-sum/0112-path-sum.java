/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    boolean flag=false;
     void  check( TreeNode root,int target,int sum)
    {
        if(root==null)
        {
           return;
        }
        sum += root.val;
        if(root.left==null && root.right ==null && sum == target)
        {
            flag=true;
            return;
        }

        if(root.left != null)
        {
          check(root.left,target,sum);
        }
        if(root.right != null)
        {
          check(root.right,target,sum);
        }
        
        
        
        
    }

    public boolean hasPathSum(TreeNode root, int targetSum) {
     check(root,targetSum,0);
      return flag;

        
    }
}