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
    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        slow->next=NULL;

        ListNode* pre=NULL;
        ListNode* ne=NULL;
        while(second){
            ne=second->next;
            second->next=pre;
            pre=second;
            second=ne;
        }

        ListNode* curr=head;
        second=pre;

        while(second){
            ListNode* next1=curr->next;
            ListNode* next2=second->next;

            curr->next=second;
            second->next=next1;

            second=next2;
            curr=next1;
        }

    }
};
