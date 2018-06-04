//  Definition for singly-linked list.
  // struct ListNode {
  //     int val;
  //     ListNode *next;
  //     ListNode(int x) : val(x), next(NULL) {}
  // };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        ListNode* merged_list=NULL;
        ListNode* result;
        if(l1->val <= l2->val){
                merged_list = l1;
                result=merged_list;
                //merged_list = merged_list->next;
                l1 = l1->next;
            }else{
                merged_list = l2;
                result=merged_list;
                //merged_list = merged_list->next;
                l2 = l2->next;
            }
        
        
        while(1){
            if(l1==NULL && l2!=NULL){
                merged_list->next=l2;
                break;
            }
            if(l2==NULL && l1!=NULL){
                merged_list->next=l1;
                break;
            }
            if(l1 == NULL && l2 == NULL){
                break;
            }
            if(l1->val <= l2->val){
                merged_list->next = l1;
                merged_list = merged_list->next;
                l1 = l1->next;
            }else{
                merged_list->next = l2;
                merged_list = merged_list->next;
                l2 = l2->next;
            }

            //merged_list = merged_list->next;
            //cout<<merged_list->val<<endl;
            //cout<<i<<endl;
            
            
        }
        
        
        
        return result;
    }
};
