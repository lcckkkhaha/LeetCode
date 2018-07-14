/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        
        ListNode* result=new ListNode(0);
        ListNode* result1=result;

        list<int> temp_list;
        int count=0;
        ListNode* temp_head=head;
        while(temp_head->next!=NULL){
            temp_head=temp_head->next;
            count++;
        }
        count++;
        int length=count;
        count=count/k;
        temp_head=head;
        for(int i=0;i<count;i++){
            
            
            for(int j=0;j<k;j++){
                temp_list.push_back(temp_head->val);
                temp_head=temp_head->next;
  
            }
            temp_list.reverse();
            for(int x=0;x<k;x++){

                result->val=temp_list.front();
                temp_list.pop_front();           
                ListNode* temp_node= new ListNode(0);
                result->next=temp_node;
                result=result->next;  
       
                
            }

            
        }
        
        //even situation
        if(length%k==0){
            temp_head=result1;
            
            for(int i=0;i<length-1;i++){
                temp_head=temp_head->next;
            }
            temp_head->next=NULL;
            
        }
        
        
        //odd situation
        //cout<<"length:"<<length;
        for(int i=0;i<length-count*k;i++){
            cout<<temp_head->val;
            result->val=temp_head->val;
            if(temp_head->next!=NULL){
                //result->val=temp_head->val;
                ListNode* temp_node= new ListNode(0);
                result->next=temp_node;
                result=result->next;
                temp_head=temp_head->next;    
            }
            
           
        }

        
        return result1;
    }
};
