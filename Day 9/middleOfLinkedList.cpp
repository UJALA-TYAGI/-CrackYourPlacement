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
    ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int l = 0;
//         while (temp){
//             l++;
//             temp = temp->next;
//         }
//         int ll = l/2 +1;
//         temp = head;
//         for(int i = 1 ;i<ll; i++)
//         {
//             temp = temp->next;

//         } 
//        return temp; 
//     }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        if (!head)
            return head;
        
        while (fast && fast->next){
            slow = slow->next;
             if (fast->next == NULL)
                return slow;
            fast = fast->next->next;
           
        }
        
        return slow;
    }
};
