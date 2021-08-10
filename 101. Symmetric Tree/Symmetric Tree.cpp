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
    
        
    bool isSymmetric(TreeNode* root) {
        if ( !root ) return true; // if root = NULL
        else return sameNode( root->left, root->right );
    }
    
    bool sameNode( TreeNode* l, TreeNode* r ) {
        if ( !l && !r ) return true; // both l , r is NULL
        else if ( !l || !r ) return false; // each of them is NULL
        else if ( l->val != r->val ) return false; // the value is not equal 
        else return sameNode( l->left, r->right ) && sameNode( r->left, l->right ); // find them childnode
     
    }
    
    
};
