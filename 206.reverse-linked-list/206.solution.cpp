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
        if(head == NULL || head->next == NULL ) return head;

        // nnode value is end node 5 for all backward recursive steps
        ListNode* nnode = reverseList(head->next);

        // cout << "Head : " << head->val << " nnode: " << nnode->val << endl;
        
        head->next->next = head;
        head->next = NULL;

        return nnode;
    }
};