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
    ListNode* reverseList(ListNode* head) {
        ListNode* pp = NULL;
        ListNode* cp= head;
        ListNode* np;
        while(cp!=NULL){
            np=cp->next;
            cp->next=pp;
            pp=cp;
            cp=np;
        }
        return pp;
    }
};