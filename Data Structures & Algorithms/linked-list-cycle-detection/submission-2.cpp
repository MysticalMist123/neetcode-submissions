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
    bool hasCycle(ListNode* head) {

        ListNode* r = head;
        ListNode* t = head;
        while(r && t){
            if(r->next==NULL) return false;
            r = r->next->next;
            t = t->next;
            if(r==t) return true;
        }
        return false;
    }
};
