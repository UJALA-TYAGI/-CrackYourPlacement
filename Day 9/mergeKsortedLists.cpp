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

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */


// priority queue solution 
// class Solution {
//     public ListNode mergeKLists(ListNode[] arr) {
//         int k=arr.length;
//         ListNode head = null, last = null;

//         PriorityQueue<ListNode> pq = new PriorityQueue<>(
//                 new Comparator<ListNode>()
//                  {
//                     public int compare(ListNode a, ListNode b)
//                     {
//                         return a.val - b.val;
//                     }
//                  });
        
//         for (int i = 0; i < k; i++)
//             if (arr[i] != null)
//                 pq.add(arr[i]);
        
//         while (!pq.isEmpty()) 
//         {
//             ListNode top = pq.peek();
//             pq.remove();
//             if (top.next != null)
//                 pq.add(top.next);
//             if (head == null) {
//                 head = top;
//                 last = top;
//             }
//             else {
//                 last.next = top;
//                 last = top;
//             }
//         }
//         return head;
//     }
// }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode *res = new ListNode(0);
        
        vector<int> tmp;
        for(auto v: lists){
            while(v!=NULL){
                tmp.push_back(v->val);
                v = v->next;
                
        }
    }
        
        sort(tmp.begin(), tmp.end());
        
        //from the end
        // for(int i = tmp.size()-1;i>=0; i--){
        //     ListNode* ans = new ListNode();
        //     ans->val = tmp[i];
        //     ans->next = res;
        //     res = ans;
        // }
        
        //from the start
        ListNode* ans = res;
        for(int i = 0; i<tmp.size(); i++){
            res->next = new ListNode(tmp[i]);
            res = res->next;

        }
        
        return ans->next;
        
    }
};
