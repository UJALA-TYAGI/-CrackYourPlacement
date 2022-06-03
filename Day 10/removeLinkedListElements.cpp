class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
        
        if(head->val == val){
            head = head->next;
        }
        
        ListNode* res = head;
        
        while(res->next){
            
            if(res->next->val == val){
                res->next= res->next->next;
            }
            
            else{
                res= res->next;
            }
        }
        
        return head;
    }
};
