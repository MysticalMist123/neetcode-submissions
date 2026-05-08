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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode *l1 = list1;
        ListNode *l2 = list2;
        ListNode *head = NULL;
        ListNode* l3 = head;

        if(l1->val<l2->val){
            l3 = new ListNode(l1->val);
            head = l3;
            l1 = l1->next;
        }
        else if(l1->val>l2->val){
            l3 = new ListNode(l2->val);
            head = l3;
            l2 = l2->next;
        }
        else{
            l3 = new ListNode(l1->val);
            l3->next = new ListNode(l2->val);

            l1 = l1->next;
            head = l3;
            l3 = l3->next;
            l2 = l2->next;
        if (!head) head = l3;
        }

        while(l1 && l2){
            if(l1->val<l2->val){
                l3->next = new ListNode(l1->val);
                l3 = l3->next;
                l1 = l1->next;
            }
            else if(l1->val>l2->val){
                l3->next = new ListNode(l2->val);
                l3 = l3->next;
                l2 = l2->next;
            }
            else{
                l3->next = new ListNode(l1->val);
                l3->next->next = new ListNode(l2->val);
                l3 = l3->next->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }

        while(l1){
            l3->next = new ListNode(l1->val);
            l3 = l3->next;
            l1 = l1->next;
        }

        while(l2){
            l3->next = new ListNode(l2->val);
            l3 = l3->next;
            l2 = l2->next;
        }

        return head;
        
    }
};
