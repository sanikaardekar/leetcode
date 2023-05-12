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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev; 
    }
    ListNode* getMid(ListNode* &head)
    {
        ListNode* slow=head;
        ListNode* fast = head->next;
        if(head==NULL || head->next==NULL) return head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    public:

        bool isPalindrome(ListNode* head) {
        //reverse ll
        //get middle, remove it by pointing it to null
        //compare 1st and 2nd parts
            if(head==NULL || head->next==NULL) return head;
            bool ans=true;
            ListNode* mid=getMid(head);
            ListNode* secondHalf = mid->next;
            mid->next=NULL;
            secondHalf= reverse(secondHalf);
            ListNode* temp1 = head;
            ListNode* temp2 = secondHalf;
            while(temp2 )
            {
                if(temp1->val!=temp2->val)
                {
                    ans=false;
                    break;
                }
                temp1=temp1->next;
                    temp2=temp2->next;
            }
             
            return ans;
    }
};