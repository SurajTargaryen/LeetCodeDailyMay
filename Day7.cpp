
 /* Perform level order traversal
    So if any one of the data matches
	-> if another one os not found at the same level -> then return false
	-> store the parents, so if both the parents are not the same return true */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* Parent[2];       
        int idx=0;
        if(root == NULL) return false;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(root)
        {
            int lmt=q.size();
            for(int i=0;i<lmt;i++)
            {
                TreeNode* temp=q.front();
                if(temp->left != NULL)
                {
                    int data = temp->left->val;
                    if(data == x || data == y)
                    {
                        Parent[idx++]=temp; 
                    }
                    q.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    int data = temp->right->val;
                    if(data == x || data == y)
                    {
                        Parent[idx++]=temp;
                    }
                    q.push(temp->right);
                }   
                q.pop();
            }
            if(idx>0)
            {
                if(idx != 2) return false;
                if(Parent[0] != Parent[1]) return true;
                return false;
            }        
        }
        return false;       
    }       
};