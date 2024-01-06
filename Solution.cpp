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
    int exp;
public:
    int getDecimalValue(ListNode* head) {
        exp = 0;
        return recurse(head);
    }
    
    int recurse(ListNode* trav) {
        if (trav->next == nullptr)
            return (trav->val == 1 ? 1 : 0);
        int temp = recurse(trav->next);
        exp++;
        return temp + (trav->val == 1 ? (1 << exp) : 0);
    }
};
