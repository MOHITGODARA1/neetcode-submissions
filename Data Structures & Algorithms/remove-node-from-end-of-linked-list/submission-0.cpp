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
        int size=0;
        ListNode* curr=head;
        while(curr){
            size++;
            curr=curr->next;
        }
        curr=head;
        if(size==1){
            return NULL;
        }
        if(size-n==0){
            return curr->next;
        }
        ListNode* pos=NULL;
        for(int i=1;i<=size-n;i++){
            pos=curr;
            curr=curr->next;
        }
        pos->next=pos->next->next;
        return head;
    }
};
