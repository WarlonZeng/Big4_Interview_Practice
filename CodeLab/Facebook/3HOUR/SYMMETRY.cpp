/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool checkLeftRight(TreeNode* left, TreeNode* right) {
    if (left == NULL && right == NULL) {
        return true;
    }
    if (left == NULL && right != NULL) {
        return false;
    }
    if (left != NULL && right == NULL) {
        return false;
    }
    if (left -> val == right -> val) {
        return true;
    }
    return (checkLeftRight(left -> left, right -> right) && checkLeftRight(left -> right, right -> left));
}
 
int Solution::isSymmetric(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if (A == NULL) {
        return 1;
    }
    
    if (checkLeftRight(A -> left, A -> right)) {
        return 1;
    }
    else {
        return 0;
    }
}
