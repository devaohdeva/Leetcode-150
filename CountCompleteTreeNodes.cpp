class Solution {
public:
    void countNodesInTree(TreeNode* root, int &count){
        if(root == NULL){
            return;
        }
        count++;
        countNodesInTree(root->left, count);
        countNodesInTree(root->right, count);
    }
    int countNodes(TreeNode* root) {
        int count = 0;
        countNodesInTree(root, count);
        return count;
    }
};