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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode;
        ListNode* p = sum;
        while ((l1 != NULL) && (l2 != NULL)) {
            p->val += l1->val + l2->val;
            if ((p->val > 9) || (l1->next != NULL) || (l2->next != NULL)) {
                p->next = new ListNode((p->val) > 9);
            }
            if (p->val > 9) p->val -= 10;
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l2 != NULL) l1 = l2;
        while (l1 != NULL) {
            p->val += l1->val;
            if ((p->val > 9) || (l1->next != NULL)) {
                p->next = new ListNode(p->val > 9);
            }
            if (p->val > 9) p->val -= 10;
            p = p->next;
            l1 = l1->next;
        }
        return sum;
    }
};