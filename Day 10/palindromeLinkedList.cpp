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
    bool isPalindrome(ListNode* head) {

        //memory limit exceeded
        // string str1="";
        // string str2="";
        // while(head){
        //     str1+= to_string(head->val);
        //     str2= to_string(head->val)+str2;
        //     head=head->next;
        // }
        // return (str1==str2); 
        
        vector<int> m;
        
        
        while(head!=NULL){
            m.push_back(head->val);
            head = head->next;
        }
        
        int n = m.size();
        
        int i=0, j= n-1;
        while(i<=j)
        {
            if(m[i]!=m[j]) 
                return false;
            
            i++; j--;
        }
        
        return true;
    }
};
