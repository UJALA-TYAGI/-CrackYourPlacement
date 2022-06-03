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
    int getDecimalValue(ListNode* head) {
                
         int res=0;

        while(head!=NULL){

            res=res*2+head->val;

            head=head->next;

        }

        return res; 

        
//         string num ="";
        
//         ListNode* temp = head;
        
//         while(temp){
//             num += to_string(temp->val);
//             temp = temp->next;
//         }
        //int n = stoi(num);
        // int ans = 0;
        // int k = 0;
        // for(int i = num.length()-1; i>=0; i--)
        // {
        //     int rem = num[i] - '0'; 
        //     ans += (rem * pow(2, k));
        //     k++;
        // }
    // return ans;
    }
    
};
