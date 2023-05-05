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
    ListNode* removeElements(ListNode* head, int val) {
    //     if(head==NULL || head->next==NULL)
    //         {
    //         return head;
    //     }
    //     ListNode* prev=head;
    //     ListNode* curr = head->next;
    //     while(curr){
    //         if(curr->val==val){
    //             prev->next=curr->next;
    //             delete(curr);
    //             curr=prev->next;
    //         }
    //         else{
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //         if(head->val==val)
    //     {
    //         return head->next;
    //     }
    //     }
    //     return head;
    
    if(head==NULL){
        return head;
    }
    if(head->val==val)
    {
        return removeElements(head->next, val);
    }
        head->next=removeElements(head->next, val);
        return head;
    }
};