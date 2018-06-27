/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
    void pre_order_traversal(TreeNode *root, vector<string>& X) {
         X.push_back(to_string(root->val));
         // Do Something with root
         if (root->left != NULL)
         {
             pre_order_traversal(root->left,X);
         }else{
             X.push_back("NULL");
         }
             
         if (root->right != NULL){
             pre_order_traversal(root->right,X);
         }else{
             X.push_back("NULL");
         }
             
    }
    
    
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q ==NULL){
            return true;
        }
        if(p==NULL && q!=NULL){
            return false;
        }
        if(p!=NULL && q==NULL){
            return false;
        }
        
        
        bool result=true;
        vector<string> A;
        vector<string> B;
        
        
        pre_order_traversal(p,A);
        pre_order_traversal(q,B);

        for(vector<string>::iterator it=A.begin();it!=A.end();it++){
            cout<<*it<<",";
        }
        cout<<endl;
        for(vector<string>::iterator it=B.begin();it!=B.end();it++){
            cout<<*it<<",";
        }
        
        vector<string>::iterator it_B=B.begin();
        vector<string>::iterator it_A=A.begin();
        for(;it_A!=A.end();){
            if(*it_A!=*it_B){
                result=false;
            }
            it_A++;
            it_B++;
        }
        
        
        return result;
        
        
    }
};
