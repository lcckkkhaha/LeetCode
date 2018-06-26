  //Definition for singly-linked list.
  // struct ListNode {
  //     int val;
  //     ListNode *next;
  //     ListNode(int x) : val(x), next(NULL) {}
  // };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL){
            return l1;
        }
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode* result=new ListNode(0);
        double A=0;
        double B=0;
        int length_l1 = 0;
        int length_l2 = 0;
        //int count=0;
        ListNode* head=new ListNode(0);
        head=l1;
        for(int i=0;head!=NULL;i++){
            A=A+head->val*pow(10,i);
            head=head->next;
            length_l1++;
        }
        head=l2;
        for(int i=0;head!=NULL;i++){
            B=B+head->val*pow(10,i);
            head=head->next;
            length_l2++;
        }

        cout<<"A+B="<<A<<"+"<<B<<endl;
        
        //Alignment
        head=l1;
        for(int i=0;i<max(length_l1,length_l2);i++){
            if(head->next==NULL){
            ListNode* temp = new ListNode(0);
            head->next = temp;
            }
            head=head->next;
            
        }
        head=l2;
        for(int i=0;i<max(length_l1,length_l2);i++){
            if(head->next==NULL){
            ListNode* temp = new ListNode(0);
            head->next = temp;
            }
            head=head->next;  
        }
        
        head=l1;
        for(int i=0;head->next!=NULL;i++){
            cout<<head->val<<",";
            head=head->next;
        }
        cout<<endl;
        head=l2;
        for(int i=0;head->next!=NULL;i++){
            cout<<head->val<<",";
            head=head->next;
        }
        //Alignment
        
        //Assignment
        head=result;
        for(int i=0;i<max(length_l1,length_l2)-1;i++){
            ListNode* temp = new ListNode(0);
            head->next = temp;
            head=head->next;
            
        }
        //Assignment
        
        int next=0;
        head=result;
        for(int i=0;head!=NULL;i++){
           
            
            head->val=fmod((l1->val+l2->val+next),10);
            next=(l1->val+l2->val+next)/10;
            
            l1=l1->next;
            l2=l2->next;
        
            head=head->next;
        }
        if(next==1){
            head=result;
            for(;head->next!=NULL;){
                head=head->next;
            }
            ListNode* temp = new ListNode(1);
            head->next = temp;
        }
        
        
        
        
//*****************      Cross-border
//         double C=A+B;
//         ListNode* result1=new ListNode(0);
//         result1=result;
//         for(int i=1;C!=0;i++){
//             //cout<<result->val<<endl;
//             result->val=fmod(C,pow(10,i))/pow(10,i-1);
//             cout<<result->val<<endl;
//             C=C-fmod(C,pow(10,i));
//             if(C==0) break;
//              ListNode* temp = new ListNode(0);
//              result->next = temp;
//              result=result->next;
//         }
        
//         ListNode* result_count=new ListNode(0);
//         result_count=result1;
//         // for(int i=0;result_count!=NULL;i++){
//         //     count++;
//         //     result_count=result_count->next;
//         // }
//         for(int i=0;i<max(length_l1,length_l2)-1;i++){
//             if(result_count->next==NULL){
//             ListNode* temp = new ListNode(0);
//             result_count->next = temp;
//             }
//             result_count=result_count->next;
            
//         }
//********************
        return result;
        
    }
};
