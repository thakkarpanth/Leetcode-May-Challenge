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
     map<int , pair<int , int >> m1;
    int dist = 0;
    queue<TreeNode *> q1;
    
    void solve()
    {
        while(!q1.empty()){
            
            TreeNode *temp = q1.front();
            q1.pop();
            if(temp->left != NULL)
            {
                m1[temp->left->val] = make_pair(m1[temp->val].first +1 , temp->val);
                q1.push(temp->left);
              
            }
            if(temp->right != NULL)
            {
                m1[temp->right->val] = make_pair(m1[temp->val].first +1 , temp->val);
                q1.push(temp->right);
                
            }
        }
        
            
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        q1.push(root);
        m1[root->val] = make_pair(0,-1);
        solve();
        if((m1[x].first == m1[y].first) && m1[x].second != m1[y].second)
            return true ;
         return false ;
    }
    
};