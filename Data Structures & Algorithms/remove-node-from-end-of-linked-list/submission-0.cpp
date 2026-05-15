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
        int l=0;
        ListNode* node = head;
        while(node){
            l++;
            node = node->next;
        }

        n = l-n+1;

        ListNode* prev = NULL;
        ListNode* curr = head;

        for(int i=1;i<n;i++){
            prev = curr;
            curr = curr->next;
        }

        if(!prev){
            head = curr->next;
        }
        else{
            prev->next = curr->next;
        }

        return head;
    }
};
