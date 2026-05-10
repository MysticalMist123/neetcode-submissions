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
    void print_list(ListNode* head){
        ListNode* node = head;
        while(node){
            cout<<node->val<<" ";
            node = node->next;
        }
        cout<<"\n";
    }
    ListNode* reverse_list(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        int l=0;
        ListNode* node = head;
        while(node){
            l++;
            node = node->next;
        }

        int mid;
        if(l&1) mid = l/2+1;
        else mid = l/2;

        ListNode* node2 = head;
        for(int i=0;i<mid;i++){
            if(i==mid-1){
                ListNode* t = node2->next;
                node2->next = NULL;
                node2 = t;
            }
            else node2 = node2->next;
        }

        node2 = reverse_list(node2);

        node = head;

        while(node && node2){
            ListNode* next = node->next;
            ListNode* next2 = node2->next;
            node->next = node2;
            node2->next = next;

            node = next;
            node2 = next2;
        }
    }
};
