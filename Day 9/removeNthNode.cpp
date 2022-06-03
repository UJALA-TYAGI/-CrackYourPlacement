/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        
        int l =0;
        while(temp){
            temp = temp->next;
            l++;
        }
        if (l-n-1 < 0) return head->next;
        temp = head;
        for(int i = 0; i< l-n-1; i++){
            temp = temp->next;
        }
        if(temp->next->next) temp->next = temp->next->next;
        else temp->next = NULL;
        

        return head;
//         int l =0;
//         while(temp){
//             temp = temp->next;
//             l++;
//         }

//         int k = l-n-1;

            
//         if(k > -1){
//             temp = head;
//             for(int i=0;i<k;i++){
//                 temp = temp->next;
//             }
            
//             if (temp->next){
//                 if (temp->next->next){
//                     temp->next = temp->next->next;
//                 }
//                 else{
//                     temp->next = NULL;
//                 }
//         }
//     }
            
//         else
//         {    
//             head = head->next;
//         }
                
//         return head;
    }
};
