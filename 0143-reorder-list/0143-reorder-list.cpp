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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head) return;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* first=head;//1
        ListNode* second=reverse(slow->next);
        slow->next=NULL; // break the og ll
        while(first && second)
        {
            ListNode* temp=first->next;//2
            first->next=second;//5
            ListNode* temp1=second->next;//4
            second->next=temp;
            //1-5-2-4-3
            second=temp1;
            first= temp;
        }

    }
};
