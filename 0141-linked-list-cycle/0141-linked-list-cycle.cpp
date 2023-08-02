/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr=head;
        unordered_map<ListNode*, int>mp;
        while(curr!=NULL)
        {
            mp[curr]++;
            curr=curr->next;
            if(mp[curr]>=2){
                return true;
            }
        }
        return false;
    }
};