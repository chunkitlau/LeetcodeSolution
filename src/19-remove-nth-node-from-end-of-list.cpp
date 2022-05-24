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
        int size = 0;
        for (ListNode* p = head; p; ++size, p = p->next);
        if (size == n) {
            ListNode* p = head->next;
            delete head;
            return p;
        }
        ListNode* p = head;
        --size;
        while (size != n) {
            --size;
            p = p->next;
        }
        ListNode* q = p->next;
        p->next = p->next->next;
        delete q;
        return head;
    }
};