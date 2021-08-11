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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    
        return sortedBST( nums, 0, nums.size() );
        
    }
    
    TreeNode* sortedBST(vector<int>& nums, int start, int end ) {
        
        if ( start >= end ) return NULL ;
        int middle = ( start + end ) / 2 ;
        TreeNode* t = new TreeNode(nums[middle]);
        t->left = sortedBST( nums, start, middle );
        t->right = sortedBST( nums, middle + 1, end );
        
        return t;
        
        
    

        
    }    
    
};
