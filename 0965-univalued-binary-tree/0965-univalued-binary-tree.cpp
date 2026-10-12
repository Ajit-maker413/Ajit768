
class Solution {
public:
    bool flag = true;

    void check(TreeNode* root, int target) {
        if (root == NULL) {
            return;
        }

        if (root->val != target) {
            flag = false;
            return;
        }

        check(root->left, target);
        check(root->right, target);
    }

    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        flag = true;
        check(root, root->val);

        return flag;
    }
};